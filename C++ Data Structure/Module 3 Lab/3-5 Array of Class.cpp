#include<iostream>
using namespace std;

class Student{
 public:
     int id;
     string name;
     Student()
     {

     }
     Student(int id,string name)
     {
         this->id=id;
         this->name=name;
     }
     void print()
     {
         cout<<id<<" "<<name<<"\n";
     }
};

int main()
{
    int a[10];
    Student s[10];
    for(int i=0;i<10;i++)
    {
        s[i] = Student(i,"A");
    }
        for(int i=0;i<10;i++)
    {
        s[i].print();
    }

}
