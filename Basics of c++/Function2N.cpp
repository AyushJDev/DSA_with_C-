#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the value of N \n"<<"N is uesd to print all the prime number from 0 to N \n";
    cout<<"Value of N : ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(prime(i)==1)
        cout<<i<<"\n";
    }
} 
