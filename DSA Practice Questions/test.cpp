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
    cout<<"Array befor swaping : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"\n";
    int p=arr[n-1];
    
    for(int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=p;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
}
