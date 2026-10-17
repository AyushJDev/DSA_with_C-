#include<bits/stdc++.h>
using namespace std;
void insertion(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);   
            else
            break;
        }
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion(n,arr);
    cout<<"Sorted Arrya is : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<", ";
    cout<<"\n";
    return 0;
}