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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int np=i+1,f=0;
            while(f==0&&np<n)
            {
                if(arr[np]!=0)
                {
                    f=1;
                    swap(arr[i],arr[np]);
                }
                else
                np++;
            }
            if(np>=n)
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}