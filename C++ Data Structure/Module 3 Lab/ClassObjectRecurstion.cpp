#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    Person *father,*mother;
    void print()
    {
        cout<<name<<"\n";
        cout<<father->name<<"\n";
        cout<<mother->name<<"\n";
    }
};
int main()
{
    Person per;
    per.father = new Person;
    per.mother = new Person;
    cout<<"ENTER NAME: ";
    cin>>per.name;
    cout<<"\n"<<"ENTER Father's NAME: ";
    cin>> per.father->name;
    cout<<"\n"<<"ENTER Mother's NAME: ";
    cin>>per.mother->name;
    per.print();

    return 0;

}
