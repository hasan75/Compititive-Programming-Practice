#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;

    Student(string name,int id,int age)
    {
        this->name=name;
        this->id=id;
        this->age=age;
    }

    void print_info()
    {
        cout<<name<<" "<<id<<" "<<age<<"\n\n";
    }
};
int main()
{
    Student *s = new Student("A",10,20);
    s->print_info();
    (*s).print_info();
}
