
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x=10;
    int* xmem = &x;
    cout<<*xmem;
    return 0;
}
