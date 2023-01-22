#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;

    void print_info()
    {
        cout<<"Roll: "<<roll<<"\n"<<"class: "<<cls<<"\n";
    }
};

class Rectangle
{
public:
    int height,width;
    Student s;
    int cal_area()
    {
        return height*width;
    }
    int cal_parameter()
    {
        return 2*(height+width);
    }
};
int main()
{
    Rectangle r1;
    cin>>r1.height;
    cin>>r1.width;
    r1.s.roll=10;
    r1.s.cls=9;
    r1.s.print_info();
    cout<<"Area:"<<r1.cal_area()<<"\n"<<"Parameter: "<<r1.cal_parameter()<<"\n";

    return 0;
}
