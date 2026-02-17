#include<iostream>
#include<vector>
using namespace std;

void QuickSort(vector<int> &arr,int l,int r)
{
    if(l>=r)
    {
        return;
    }
    
    else
    {
        int lp =l;
        int rp =r;
        int f= 0;
        while(lp<=rp)
        {
            if(arr[l]>=arr[lp]&&f==0)
            {
                lp++;
            }
            else if(arr[l]<arr[rp])
            {
                f=1;
                rp--;
            }
            else
            {
                f=0;
                swap(arr[lp],arr[rp]);
            }
        }
        swap(arr[l],arr[rp]);
        QuickSort(arr,l,rp-1);
        QuickSort(arr,rp+1,r);
        return;
    }
}
int main()
{
    cout<<"Enter the size of array : ";
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Eneter the number : ";
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<", ";
    return 0;
}
