#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
        int age;
        double salary;
        long long number;
        string address;
    public:
        string name;
        string id;
        string subject;
        string dept;
    void setSalary(double s)
    {
        salary =s;
    }
    double getSalary()
    {
        return salary;
    }
    void setInfo(int a, long long num, string address)
    {
        age =a;
        number =num;
       this-> address=address;
    }
    struct BasicInfo
    {
            string name;
            string id;
            string subject;
            string dept;
    };
    struct PersonalInfo
    {
            string name;
            string address;
            long long  number;
            int age;
    };
    PersonalInfo getPersonalInfo()
    {
        PersonalInfo p;
        p.name=name;
        p.address=address;
        p.number=number;
        p.age=age;
        return p;
    }
};

int main()
{
    Teacher t1;
    t1.name="Ayven";
    t1.id="CS23T051";
    t1.subject="Autobommus Vehicle System";
    t1.dept="Computer Science";
    t1.setSalary(500000);
    t1.setInfo(23,8820262448,"123/9 CKS Street Kolkata = 700045");
    Teacher:: PersonalInfo t1p;
    t1p=t1.getPersonalInfo();
    cout<<t1p.address<<"\n";
    cout<<t1p.age<<"\n";
    cout<<t1p.name<<"\n";
    cout<<t1p.number;

}