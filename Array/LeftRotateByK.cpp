//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cout<<"Enter the size of the array : ";
    if(!(cin>>n)||n<1)
    {
        cout<<"Invalid \n";
        return 0;
    }
    vector<int>v(n,0);
    cout<<"Enter the values in the arry : ";
    for(int i=0;i<n;i++)
    {
        if(!(cin>>v[i]))
        {
            cout<<"Invalid input \n";
            return 0;
        }
    }
    cout<<"Enter the value by which the array should be rotated : ";
    {
        int k;
        if(!(cin>>k)||k<0)
        {
            cout<<"Invalid \n";
            return 0;
        }
        k=k%n;
        if(k<=(n/2))
        {
            vector<int> v1(k,0);
            for(int i=0;i<k;i++)
            v1[i]=v[i];
            for(int i=k;i<n;i++)
            v[i-k]=v[i];
            for(int i=n-k;i<n;i++)
            v[i]=v1[i-(n-k)];
        }
        else
        {
            vector<int> v1(n-k,0);
            for(int i=k;i<n;i++)
            v1[i-k]=v[i];
            for(int i=n-1;i>=n-k;i--)
            v[i]=v[i-(n-k)];
            for(int i=0;i<n-k;i++)
            v[i]=v1[i];
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<((i<(n-1))?", ":"\n");
    return 0;
}