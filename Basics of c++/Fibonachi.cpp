#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return (x+y);
}
int main()
{
    int n;
    cout<<"Enetr the number of place you want to print"<<"\nN : ";
    cin>>n;
    int prev=-1;
    int curent =1;
    for(int i=0;i<n;i++)
    {
        int c=sum(prev,curent);
        cout<<c<<", ";
        prev=curent;
       curent=c;

    }
    return 0;

}