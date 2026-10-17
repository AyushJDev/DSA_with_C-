#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Values in array : ";
    for(int i =0; i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int sp =0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                sp=1;
            } 
        }
        if(sp==0)
        break;
    }
    cout<<"Array after Bubble Sort : ";
    for(int i= 0;i<n;i++)
    cout<<arr[i]<<", ";
    cout<<"\n";
    return 0;
}