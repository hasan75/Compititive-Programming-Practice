#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *arr;
    int sz;
    int cap;

    void Increase_size()
    {
        cap=cap*2;
        int *tmp  = new int[cap];
        for(int i=0;i<sz;i++)
        {
            tmp[i]=arr[i];
        }
        delete []arr;
        arr=tmp;
    }
public:
    Array()
    {
        arr= new int[1];
        sz=0;
        cap=1;

    }

    void PUSH_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz]=x;
        sz++;

    }

    void Insert(int pos,int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        sz++;
        arr[pos]=x;

    }

    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main()
{
    Array a;
    a.PUSH_back(10);
    a.PUSH_back(20);
    a.PUSH_back(30);
    a.PUSH_back(40);
    a.PUSH_back(50);
    a.Insert(1,5);
    a.print();

}
