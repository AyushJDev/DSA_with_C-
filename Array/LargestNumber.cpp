#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cout<<"Enter the size of the array : ";
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
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout<<"Largest element of the array is : "<<largest<<"\n";
    return 0;
}