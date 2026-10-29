#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout<<"Enter the size of array : ";
    int n;
    if(!(cin>>n)||n<1)
    {
        cout<<"Invalid \n";
        return 0;
    }
    vector<int> arr(n);
    cout<<"Enter the Values of the array : ";
    for(int i=0;i<n;i++)
    {
        if(!(cin>>arr[i]))
        {
            cout<<"Invalid input \n";
            return 0;
        }
    }
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    return 0;
    else
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<((i<n-1)?", ":"\n");
    }
    return 0;
}