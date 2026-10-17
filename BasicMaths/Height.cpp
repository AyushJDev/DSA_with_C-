#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cout<<"Enter the size of T"; 
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Enter Size of N";
        int n;
        cin>>n;
        vector<int> v ;
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value";
            int c;
            cin>>c;
            v.emplace_back(c);
        }
        int l = v[0];
        for(int j=1;j<n;j++)
        {
            if(l<=v[j])
            l=v[j];
        }
        cout<<l;
    }
}
