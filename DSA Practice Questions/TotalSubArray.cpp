#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int totalSubArray(vector<int> &num, int k)
{
    int c = 0;
    unordered_map<long long, int> m;
    m[0]=0;
    long long s = 0;
    for (int i = 0; i < num.size(); i++)
    {
        s += num[i];
        m[s]++;
    }
    s = 0;
    for (int i = 0; i < num.size(); i++)
    {
        s+=num[i];
        if (s==k)
        c++;
        else if(m.find(s-k)!=m.end())
            {
                c+=m[s-k];
            }
    }

    return c;
}
int main()
{
    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value in array : ";
        cin >> arr[i];
    }
    cout << "Enter the value of sum : ";
    cin >> k;
    int s = totalSubArray(arr, k);
    cout << "longest subarray size is : " << s << "\n";
}
