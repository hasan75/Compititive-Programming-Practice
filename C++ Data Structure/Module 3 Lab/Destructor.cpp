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
    //destructor
    ~Student()
    {
//        cout<<"Destructure Called ";
//        print_info();
    }
};


class Person
{
public:
    string name;
    Person *father,*mother;
    Person() //constructor
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name,string f_name,string m_name) //constructor
    {
        this->name=name;
        father=new Person;
        father->name=f_name;
        mother=new Person;
        mother->name=m_name;
    }

    void print_person()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Father Name: "<<father->name<<"\n";
        cout<<"Mother Name: "<<mother->name<<"\n\n\n";
    }

    ~Person()
    {
        cout<<"Called ";
        if(father!=NULL)
            delete father;
        if(mother!=NULL)
            delete mother;
    }
};


int main()
{
    Student s("Aman",10,20);
    s.print_info();

    Student s2("Romana",10);
    s2.print_info();

    Student s3; //calls constructor with 0 parameter

    Person p("Kuddus","Kuddus er Bap","Kuddus er Maa");
    p.print_person();
    return 0;
}

