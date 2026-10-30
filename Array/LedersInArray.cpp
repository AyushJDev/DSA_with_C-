#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    ios_base::sync_with_stdio(false);
    {
        int n;
        cout << "Enter the Size of the Array : ";
        if (!(cin >> n) || n < 1)
        {
            cout << "Invalid size \n";
            return 0;
        }
        {
            vector<int> arr(n, 0);
            cout << "Enter the avlues in the Array : ";
            for (int i = 0; i < n; i++)
            {
                if (!(cin >> arr[i]))
                {
                    cout << "Invalid Input \n";
                    return 0;
                }
            }

            {
                int k=arr[n-1];
                v.emplace_back(k);
                for(int i=n-2;i>=0;i--)
                {
                    if(arr[i]>v.back())
                    v.emplace_back(arr[i]);
                }
            }
        }
    }
    reverse(v.begin(),v.end());
    cout<<"Leders in the array are : "; 
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<(i<(v.size()-1)?", ":"\n");
    v.clear();
    return 0;
}