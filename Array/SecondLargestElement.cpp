#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout<<"Enter the size of the array : ";
    int n;
    if(!(cin>>n)||n<1)
    {
        cout<<"Invalid input \n";
        return 0;
    }
    cout<<"Enter the values in the array : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(!(cin>>arr[i]))
        {
            cout<<"Invalid \n";
            return 0;
        }
    }
    int sl=INT_MIN;
    int lr=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>lr)
        {
           sl=lr;
           lr=arr[i]; 
        }
        else if(arr[i]<lr&&arr[i]>sl)
        {
            sl=arr[i];
        }
    }
    if(sl!=INT_MIN)
    cout<<"Second largest Elemnt in the array is : "<<sl<<"\n";
    else
    cout<<"Second largest element doesnot exsist \n";
    return 0;
}