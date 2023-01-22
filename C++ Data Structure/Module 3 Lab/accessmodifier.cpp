#include<iostream>
using namespace std;

//public
class Student
{
protected:
    string name;
    int id;
    int age;
public:
    void set_info(string s,int i,int a)
    {
        name=s;
        id=i;
        age=a;
    }
    void print_info()
    {
        cout<<"Name: "<<name<<"\n"<<"Id: "<<id<<"\n"<<"Age: "<<age<<"\n";
    }
};

class Good_Std:Student
{
private:
    string grade;
public:
    void set_in(string n,int id,int ag,string grd)
    {
        name=n;
        id=id;
        age=ag;
        grade=grd;
    }
    void print_in()
    {
        cout<<"\n"<<"Name: "<<name<<"\n"<<"Id: "<<id<<"\n"<<"Age: "<<age<<"\n"<<"Grade: "<<grade<<"\n";
    }
};
int main()
{
    Student s;
    s.set_info("Kuddus",20,25);
    s.print_info();

    Good_Std adm;
    adm.set_in("Admin Alu",1,20,"A+");
    adm.print_in();
    return 0;
}
