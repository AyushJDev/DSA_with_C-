#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int si=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[si]>arr[j])
            si=j;
        }
        int tep=arr[i];
        arr[i]=arr[si];
        arr[si]=tep;
    }
    cout<<"The new array in accending order : ";
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<", ";
    cout<<"\n";
    return 0;
}