#include<iostream>
#include<fstream>
using namespace std;

void swapNums(int &x,int &y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}


int main()
{
    int a,b;
    cin>>a>>b;
    swapNums(a,b);
    cout<<a<<" "<<b;

}
