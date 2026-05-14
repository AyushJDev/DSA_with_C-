#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
        map<long long,int> m;
        long long s=0;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(s==k)
                l=max(l,i+1);
                
            else if(m.find(s-k)!=m.end())
                l=max(l,i-m[s-k]);

            if(m.find(s)==m.end())
                m[s]=i;
        }
        cout<<"\n";
        return l;
}
int main()
{
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value in array : ";
        cin>>arr[i];
    }
    cout<<"Enter the value of sum : ";
    cin>>k;
    int s =longestSubarray(arr,k);
    cout<<"longest subarray size is : "<<s<<"\n";
}
