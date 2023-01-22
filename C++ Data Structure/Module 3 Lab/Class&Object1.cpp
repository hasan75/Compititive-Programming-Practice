#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    Person *father,*mother;

    void print_info()
    {
        cout<<name<<"\n";
        cout<<"Father:"<<father->name<<"\n";
        cout<<"Mother:"<<mother->name<<"\n";
    }
};
int main()
{
    Person kuddus;
    kuddus.father = new Person;
    kuddus.mother = new Person;
    kuddus.name = "Kuddus";
    kuddus.father->name = "Jabbar";
    kuddus.mother->name = "Sokhina";
    kuddus.print_info();

    return 0;
}
