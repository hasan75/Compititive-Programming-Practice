
#include<bits/stdc++.h>
using namespace std;

void change_value(int** q)
{
    **q = 2500;
}
int main()
{
    int x=10;
    int* ptr = &x;
    int** ptr1 = &ptr;
    change_value(ptr1);
    cout<<x<<endl;


    return 0;
}
