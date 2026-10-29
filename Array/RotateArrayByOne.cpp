#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cout<<"Enter the size of the array : ";
    if(!(cin>>n)||n<1)
    {
        cout<<"Invalid \n";
        return 0;
    }
    cout<<"Enter the values in the array : ";
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        if(!(cin>>v[i]))
        {
            cout<<"Invalid Input \n";
            return 0;
        }        
    }
    for(int i=1;i<n;i++)
    swap(v[i],v[i-1]);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<(i<n-1?", ":"\n");
    }
    return 0;
} 