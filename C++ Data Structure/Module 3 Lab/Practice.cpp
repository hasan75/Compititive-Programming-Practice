#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Person
{
protected:
    int age;
    int id;
    string name;

public:

    Person()
    {

    }

    Person(int id,int age,string name)
    {
        this->id=id;
        this->age=age;
        this->name=name;
    }
    void print_info()
    {
        cout<<"ID: "<<id<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Name: "<<name<<"\n\n";
    }

};

class Student{
public:
    string name;

    Student *father,*mother;

    Student()
    {
        father = NULL;
        mother = NULL;
    }
    Student(string name,string f_name,string m_name)
    {
        this->name=name;
        father = new Student;
        father->name=f_name;
        mother = new Student;
        mother->name=m_name;
    }

    void print_info()
    {
        cout<<name<<" "<<father->name<<" "<<mother->name<<"\n";
    }

    ~Student()
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
    Person s(10,20,"Kuddus");
    s.print_info();

    Student st("kuddus","Bap","Maa");
    st.print_info();
}
