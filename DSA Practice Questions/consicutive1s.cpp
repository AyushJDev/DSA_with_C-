#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value in array : ";
        cin>>arr[i];
    }
    int max=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        max++;
        else{
            if(p<max)
            p=max;
            max=0;
        }
    }
    p= p<max ? max :p;
    cout<<p;
}
