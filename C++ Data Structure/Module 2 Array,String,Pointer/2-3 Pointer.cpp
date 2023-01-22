#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int* x = &a;
    int* y=&b;
    cout<<*x<<" "<<*y<<endl;

    *x = 200;
    *y=500;

    cout<<a<<" "<<b;

    return 0;

}
