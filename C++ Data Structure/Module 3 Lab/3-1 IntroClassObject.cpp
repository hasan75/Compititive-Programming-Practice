#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    string name;
    int id;
    int age;
    string f_name;
    string m_name;


    void print_info()
    {
        cout<<name<<" "<<id<<" "<<age<<" "<<f_name<<" "<<m_name<<"\n";
    }
};

class Rectangle
{
public:
    int width,height;

    int calc_area()
    {
        return height*width;
    }
    int cal_perimeter()
    {
        return 2*(height+width);
    }
};


int main()
{
    Student s;
    s.name = "Hasan";
    s.id=1212;
    s.age=19;
    s.f_name = "KUDDUS";
    s.m_name = "Sokhina";
    s.print_info();

    Student s2;
    s2.name="Jarina";
    s2.id=1010;
    s2.age=19;
    s2.f_name = "Jamil";
    s2.m_name = "Kamala";
    s2.print_info();

    Rectangle r1;
    r1.height = 10;
    r1.width = 20;
    cout<<r1.calc_area()<<" "<<r1.cal_perimeter()<<"\n";

    return 0;
}
