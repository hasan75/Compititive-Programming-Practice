#include<bits/stdc++.h>
using namespace std;

/*

Time Complexity: (2^n);

Memory Complexity: O(n);  for the stack it's been storing.


if f(n) is saved,
    time complexity : o(n); //as every fuction is called only one time
    memory complexity: o(n);

*/
int called = 0;
long long save[100];
//vector<int>save;
//save.resize(100);

long long fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(save[n]!=0)
    {
        return save[n];
    }
    long long x = fib(n-1);
    called++;
    long long y = fib(n-2);
    called++;
    save[n] = x+y;
    return x+y;
}
int main()
{

    //order n size array
    //input  nums, show max,min,sum;

    int n;
    cin>>n;
    long long num = fib(n);
    cout<<n<<"th place Fib: "<<num<<"\n";
    cout<<"called :"<<called;

    return 0;



}

/*
n

n-th fibonacci number

f[0] = 0
f[1] = 1;

f[i] = f[i-1]+f[i-2]
*/


