/*
access modifier

public
private
protected
*/

#include<iostream>
using namespace std;

class Person
{
private:
    int id;
    string name;
public:
    void set_info(string s,int i)
    {
        name = s;
        id = i;
    }
    void print()
    {
        cout<<name<<" "<<id<<"\n";
    }
};

class User
{
protected:
    string name;
    int age;
};

class Admin:User{
private:
 string desig;
public:
    void set_in(string n,int a,string d)
    {
        name = n;
        age = a;
        desig = d;
    }
    void print_info()
    {
        cout<<name<<" "<<age<<" "<<desig;
    }
};

int main()
{
    Person s;
    s.set_info("Anam",20);
    s.print();

    Admin ad;
    ad.set_in("Kuddus",20,"Admin");
    ad.print_info();

    return 0;

}
