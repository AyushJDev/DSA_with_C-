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
    int i=0,j=0,f=0,k=0;
    if(arr1[0]<arr2[0])
        arr.emplace_back(arr1[0]);
    else
        arr.emplace_back(arr2[0]);
    while(i<n1||j<n2)
    {
       if(arr1[i]==arr[arr.size()-1] && f==0 && i<n1)
       {
         i++;
       }
       else if(arr2[j]==arr[arr.size()-1] && j<n2)
       {
        f=1;
        j++;
       }
       else
        {
            f=0;
            if(arr1[i]<arr2[j]&&i<n1)
               { 
                    arr.emplace_back(arr1[i]);
                    i++;
               }
            else
                {
                    arr.emplace_back(arr2[j]);
                    j++;
                }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<", ";
    }
    
}