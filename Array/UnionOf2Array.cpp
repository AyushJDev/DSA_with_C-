#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n1,n2,j=-1;
    vector <int> unionArr;
    cout<<"Enter the size of 1st and the second array : ";
    if(!(cin>>n1>>n2)||n1<0||n2<0)
    {
        cout<<"Invalid size input \n";
        return 0;
    }
    {
        int arr1[n1];
        int arr2[n2];
        cout<<"Enter the values in first array : ";
        for(int i=0;i<n1;i++)
        {
            if(!(cin>>arr1[i]))
            {
                cout<<"Invalid Input \n";
                return 0;
            }
        }
        cout<<"Enter the values in Second array : ";
        for(int i=0;i<n2;i++)
        {
            if(!(cin>>arr2[i]))
            {
                cout<<"Invalid Input \n";
                return 0;
            }
        }
        int i1=0,i2=0;
        while(i1<n1&&i2<n2)
        {
            if(j==-1)
            {
                if(arr1[i1]<=arr2[i2])
                {
                    unionArr.emplace_back(arr1[i1]);
                    i1++;
                }
                else{
                    unionArr.emplace_back(arr2[i2]);
                    i2++;
                }
                j++;
            }
            else
            {
                if(i1<n1 && arr1[i1]<=arr2[i2])
                {
                    if(arr1[i1]>unionArr[j])
                    {
                        unionArr.emplace_back(arr1[i1]);
                        j++;
                    }
                    i1++;
                }
                else
                 {
                    if(arr2[i2]>unionArr[j])
                    {
                        unionArr.emplace_back(arr2[i2]);
                        j++;
                    }
                    i2++;
                }
            }
        } 
        while(i1<n1)
        {
            if(arr1[i1]>unionArr[j])
            {
                unionArr.emplace_back(arr1[i1]);
                j++;
            }
            i1++;
        }
        while(i2<n2)
        {
            if(arr2[i2]>unionArr[j])
            {
                unionArr.emplace_back(arr2[i2]);
                j++;
            }
            i2++;
        }
    }
        cout<<"Union of the 2 array is : ";
        for(int i=0;i<=j;i++)
        cout<<unionArr[i]<<(i<j?", ":"\n");
        unionArr.clear();
    return 0;
}