#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    ios_base::sync_with_stdio(false);
    vector<int> interArr;
    {
        int n1,n2;
        cout<<"Enter the size of the array 1st and the 2nd array : ";
        if(!(cin>>n1>>n2)|| n1<0 || n2<0)
        {
            cout<<"Invalid Size";
            return 0;
        }
        {
            vector<int> arr1(n1,0);
            vector<int>arr2(n2,0);
            cout<<"Enter the Values in the 1st array : ";
            for(int i=0;i<n1;i++)
            {
                if(!(cin>>arr1[i]))
                {
                    cout<<"Invalid Input";
                    return 0;
                }
            }
            cout<<"Enter the Values in the 1st array : ";
            for(int i=0;i<n2;i++)
            {
                if(!(cin>>arr2[i]))
                {
                    cout<<"Invalid Input";
                    return 0;
                }
            }
            {
                int i1=0,i2=0;
                while(i1<n1 && i2<n2)
                {   
                    if(arr1[i1]==arr2[i2])
                    {
                        interArr.emplace_back(arr1[i1]);
                        i1++;
                        i2++;
                    }
                    else if(arr1[i1]>arr2[i2])
                    i2++;
                    else
                    i1++;
                }
            }
        }
    }
    for(int i=0;i<interArr.size();i++)
        cout<<interArr[i]<<(i<(interArr.size()-1)?", ":"\n");  
    return 0;
 }