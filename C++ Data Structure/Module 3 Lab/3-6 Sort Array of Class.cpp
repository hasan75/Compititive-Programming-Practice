
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;
    Student(){}
    Student(int id,int age,string name)
    {
        this->id=id;
        this->age=age;
        this->name=name;
    }
    void print()
    {
        cout<<id<<" "<<age<<" "<<name<<"\n";
    }



    //for sorting
//    this is operator overloading

    bool operator < (Student s)
    {
        return id < s.id;
    }

//    Student operator + (Student s)
//    {
//        return ...
//    }

};


//bool comp(Student one,Student two)
//{
////    when one is less than b ,return true
//    if(one.id==two.id)
//    {
//        return one.age<two.age;
//    }
//    return one.id < two.id;
//}

int main()
{
    vector<Student>a;

    for(int i=0; i<10; i++)
    {
        a.push_back(Student(30-i,20+i,"A"));
    }
//    sort(a.begin(),a.end(),comp);
    sort(a.begin(),a.end());
    for(int i=0; i<10; i++)
    {
        a[i].print();
    }

}
