#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int r=n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Eneter the value of the array : ";
        cin>>arr[i];
    }
     cout<<"Value stored in the array : \n ";
    for(int i=0;i<n;i++)
    {
        r = r^arr[i]^i;
        cout<<arr[i]<<", ";
    }
    cout<<"\n";
    cout<<r;
}