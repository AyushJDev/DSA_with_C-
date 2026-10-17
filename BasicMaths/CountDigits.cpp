#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    if(n!=0)
    {
        n=abs(n);
        for(int i=n;i>0;i=i/10)
            c++;
    }
    else
    c++;
    cout<<c<<"\n";
    return 0;   
}