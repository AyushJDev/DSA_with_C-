#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        int cls;
        char sec;
        string name;
        int rollNo;
        string enrolNo;
        int age;
        string DOB;
        Student(int cls,char sec,string name,int rollNo,string enrolNo,int age,string DOB,long long number,string address)
    {
        this->cls=cls;
        this->sec=sec;
        this->name=name;
        this->rollNo=rollNo;
        this->enrolNo=enrolNo; 
        this->age=age;
        this->DOB=DOB;
        this->number=number;
        this->address=address;
    }
    void displayInfo()
    {
        cout<<"Class\t\t:\t"<<cls<<"\n";
        cout<<"Section\t\t:\t"<<sec<<"\n";
        cout<<"Name\t\t:\t"<<name<<"\n";
        cout<<"Roll No\t\t:\t"<<rollNo<<"\n";
        cout<<"Enroll No\t:\t"<<enrolNo<<"\n";
        cout<<"Age\t\t:\t"<<age<<"\n";
        cout<<"DOB\t\t:\t"<<DOB<<"\n";
        cout<<"Phone Number\t:\t"<<number<<"\n";
        cout<<"Address\t\t:\t"<<address;
    }
    private:
        long long number;
        string address;
        double feeDue;
};
int main()
{
    Student S1(10,'A',"Ayven",5,"SI231052",15,"20/Jan/2001",2015897889,"123/9 CKS Street Kolkata = 700045");
    S1.displayInfo();
}