#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>& arr, int lb, int ub )

{
    if(ub-lb<0)
    return;
    cout<<"Passed the if statement \n";
    int lp=lb;
    int rp=ub;
    {  int i=lb+1;
        while(lp<rp)
        {
            while(arr[lb]>arr[lp] && lp<rp)
            {
                lp++;
            }
            while(arr[lb]<arr[rp] && rp>lp)
            {
                rp--;
            }
            if(lp<rp)
            swap(arr[lp],arr[rp]);
        }    
    }
    swap(arr[rp],arr[lb]);
    insert(arr,lb,rp-1);
    insert(arr,rp+1,ub);
    return;
}

int main()
{
    int n;
    cout<<"Enter the Size of the Array : ";
    if(!(cin>>n)||n<=0)
    {
        cout<<"Invalid Input \n";
        return 0;
    }
    vector <int>arr(n);
    cout<<"Enter the Values in the Array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Function is being called for the first time \n";
    insert(arr,0,n-1);
    cout<<"Function Has returned \n";
    cout<<"Array after Sorting : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<(i+1<n ? ", " : "\n");
    return 0;
}