#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int* arr;
    int cap,sz;

    void increase_size()
    {
        cap=cap*2;
        int *temp = new int[cap];
        for(int i=0;i<sz;i++)
        {
            temp[i]=arr[i];
        }
        delete []arr;
        arr=temp;
    }
public:
    Array()
    {
        arr = new int[1];
        cap=1;
        sz=0;

    }

    void Push_back(int x)
    {
        if(sz==cap)
        {
            increase_size();
        }
        arr[sz]=x;
        sz++;
    }

    void Insert(int pos,int x)
    {
        if(sz==cap)
        {
            increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz+=1;
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
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Push_back(60);
    a.Push_back(70);
    a.print();
    cout<<"\nAfter Insertions: \n\n";
    a.Insert(2,15);
    a.print();
    a.Insert(1,100);
    a.print();

    return 0;
}
