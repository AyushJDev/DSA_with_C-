#include <iostream>
using namespace std;
int loop()
{
    int n;
    cout<<" loop called ";
    cout<<"Enter the number : ";
    cin>>n;
    return (n);
}
double average(int preav,int i,int n )
{
    return ((((i-1)/double(i))*preav)+((1/double(i))*n));
} 
int main()
{
    int i=0;
    double ave;
    while(true)
    {
        i++;
        bool c;
        cout<<"Enter the choice : ";
        cin>>c;
        cout<<"value of c is "<<c<<"\n";
        if(c==true)
        {
            cout<<i;
            int n=loop();
            cout<<" loop executed || ";
            ave=average(ave,i,n);
            cout<<ave;
            cout<<" ave doen \n";
            
        }
        else
        break;
    }

    cout<<"Out\n";
    cout<<"Average is : ";
    cout<<ave;
}