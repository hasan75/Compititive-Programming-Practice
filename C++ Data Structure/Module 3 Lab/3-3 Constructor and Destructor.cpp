//constructor
#include<iostream>
using namespace std;

//public
class Student
{
public:
    string name;
    int id;
    int age;

    Student()
    {

    }
    Student(string s,int i,int a)
    {
        name = s;
        id=i;
        age=a;
    }
    Student(string s,int id)
    {
        name =s;
        this->id=id;
    }

    void print_info()
    {
        cout<<"Name: "<<name<<"\n"<<"Id: "<<id<<"\n"<<"Age: "<<age<<"\n\n";
    }
};


int main()
{
    Student s("Aman",10,20);
    s.print_info();

    Student s2("Romana",10);
    s2.print_info();

    Student s3; //calls constructor with 0 parameter

    return 0;
}
