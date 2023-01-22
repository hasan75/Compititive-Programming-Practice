
#include<bits/stdc++.h>
using namespace std;


/*

Time Complexity: O();
Memory Complexity: O(n);
*/

class Array{
private:
    int *arr;
    int cap;
    int sz;
    //time complexity:
    void Increase_size()
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
        arr= new int[1];
        cap=1;
        sz=0;
    }
    //time complexity: o(1) o(n)
    void Push_back(int x)
    {
        if(cap==sz) //o(n)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }

    void Insert(int pos,int x)
    {
        if(cap==sz) //o(n)
        {
            Increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz++;
    }

    void print()
    {
        for(int i=0;i<sz;i++)
            cout<<arr[i]<<" ";

        cout<<"\n";
    }
    int getSize()
    {
        return sz;
    }

    int getElement(int idx)
    {
        if(idx >=sz)
        {
            cout<<"Error,Index is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }

    void POP_back()
    {
        if(sz==0)
        {
            cout<<"Current Size is 0\n";
        }
        sz--;
    }

    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"Position does not exists\n";
            return ;
        }
        for(int i=pos+1;i<sz;i++)
        {
            arr[i-1]=arr[i];
            //swap(arr[i-1],arr[i]);
        }
    }
};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Insert(1,5);
    a.print();
    cout<<a.getSize()<<"\n";


//    for(int i=0;i<a.getSize();i++)
//    {
//        cout<<i<<"element :"<<a.getElement(i)<<"\n";
//    }
a.POP_back();
a.print();
a.POP_back();
a.print();
    return 0;

}
