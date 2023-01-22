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

    void Decrease_size()
    {
        cap=cap/2;
        int *tmp = new int[cap];
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

    void Delete_Elment(int pos)
    {
        if(pos>sz)
        {
            cout<<pos<<"is out of bound!\n";
        }
        for(int i=pos+1;i<sz;i++)
        {
            arr[i-1]=arr[i];
        }
        sz-=1;

        if(sz< (cap/2))
        {
            Decrease_size();
        }
    }

    int get_size()
    {
        return sz;
    }
    int get_index_element(int idx)
    {

        return arr[idx];
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
    cout<<"Array Size: "<<a.get_size()<<"\n";

    for(int i=0;i<a.get_size();i++)
    {
        cout<<"On position"<<i<<", Value is: "<<a.get_index_element(i)<<"\n";
    }
    cout<<"\n";
    a.Delete_Elment(1);
    a.print();
    cout<<"Array Size: "<<a.get_size()<<"\n";

    return 0;
}
