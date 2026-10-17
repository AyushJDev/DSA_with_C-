#include<bits/stdc++.h>
using namespace std;
void merger(vector <int>& arr,int lb,int ub)
{   
    int n=(ub-lb)+1;
    int arr2[n];
    int lp=lb,mid=((ub+lb)/2);
    int rp=mid+1;
    for(int i=0;i<n;i++)
    {
        if(lp>mid)
        {
            arr2[i]=arr[rp];
            rp++;
        }
        else if(rp>ub)
        {
            arr2[i]=arr[lp];
            lp++;
        }
        else if(arr[lp]<=arr[rp])    
        {
            arr2[i]=arr[lp];
            lp++;
        }
        else
        {
            arr2[i]=arr[rp];
            rp++;
        }
    }
    int c=0;
    for(int i=lb;i<=ub;i++)
    {    
        arr[i]=arr2[c];
        c++;
    }
}
void mergeSort(vector <int>& arr,int lb,int ub)
{
    if(lb>=ub)
    return;
    int mid =lb+(ub-lb)/2;
    mergeSort(arr,lb,mid); 
    mergeSort(arr,mid+1,ub);
    merger(arr,lb,ub);
    return;
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
      cout<<"Enter the values in the array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergeSort(arr,0,n-1);
    cout<<"Array after Sorting : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<", ";
    cout<<"\n";
    return 0;
} 