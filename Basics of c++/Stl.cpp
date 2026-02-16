#include<bits/stdc++.h>
using namespace std;

void pairs()
{
    /*pair is a type of data type that can be used for storing any type of values in pair | paired values culd be of similar data type or could be of different type it can be nestered and can be used */
    pair<int, int> p ={1,2};// intialization
    cout<<p.first<<p.second<<"\n";//access
    pair<int,int> a[10];// can be used as an array
    
}

void vectorExpalined()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    vector<int>::iterator addreB=v.begin();
    vector<int>::iterator addreE=v.end();
}