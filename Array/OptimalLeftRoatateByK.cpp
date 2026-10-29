#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
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
        if(k>0)
        {
            reverse(v.begin(),v.begin()+k);
            reverse(v.begin()+k,v.begin()+n);
            reverse(v.begin(),v.begin()+n);
        }
    }
    return 0;
}