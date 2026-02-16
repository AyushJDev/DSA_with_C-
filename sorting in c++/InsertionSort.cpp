#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the numer : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        /* My way not very good
        for(int j=i;j>0;j--)
        {
            if(arr[j]>arr[j-1])
            break;
            else
            {
                int temp= arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        } 
        */
       //striver way
       int j=i;
       while(j>0&&arr[j]<arr[j-1])
       {
            swap(arr[j],arr[j-1]);//it is faster as it swap the meory adrees insted of copying the data
            j--;
       }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}