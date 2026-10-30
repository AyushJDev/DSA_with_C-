#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout<<"Enter the size of the array : ";
    int n;
    if(!(cin>>n)||n<1)
    {
        cout<<"Invalid Length \n";
        return 0;
    }
    cout<<"Enter the elements in the array : ";
    vector <int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        if(!(cin>>arr[i]))
        {
            cout<<"Invalid type \n";
            return 0;
        }
    }
    int el,c=0;
    for(int i=0;i<n;i++)
    {
        if(c==0)
        el=arr[i];
        if(el==arr[i])
        c++;
        else
        c--;
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(el==arr[i])
        c++;
    }
    if(c>n/2)
    cout<<"Majority element in the array is "<<el<<". \n";
    else
    cout<<"There is no majority Element in the array. \n";
    return 0;
}