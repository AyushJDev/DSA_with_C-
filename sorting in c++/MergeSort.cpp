#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int l,int mid,int h)
{
    int lp=l;
    int rp=mid+1;
    vector<int> rr;
    while(lp<=mid && rp<=h)
    {
        if(arr[lp]<=arr[rp])
        {
            rr.emplace_back(arr[lp]);
            lp++;
        }
        else
        {
            rr.emplace_back(arr[rp]);
            rp++;
        }
    }
    while(lp<=mid)
    {
        rr.emplace_back(arr[lp]); 
        lp++;
    }
    while(rp<=h)
    {
        rr.emplace_back(arr[rp]);
        rp++;
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=rr[i-l];
    }
    return;
}
void mergeSort(vector<int> &arr,int l,int h)
{
    if(l==h)return ;
    int mid= (l+h)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the the value : ";
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}