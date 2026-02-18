#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter the size of the first array : ";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter the value in array : ";
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the size of the first array : ";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter the value in array : ";
        cin>>arr2[i];
    }
    vector<int> arr;
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]==arr2[j])
        {
            arr.emplace_back(arr1[i]);
            i++;j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        j++;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<", ";
    }
}
