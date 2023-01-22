#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *arr;
    int cap,sz;

    void Increase_Array()
    {
        cap=cap*2;

        int *temp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            temp[i]=arr[i];
        }
        delete []arr;
        arr=temp;
        //delete []temp;

    }
public:
    Array()
    {
        arr = new int[1];
        sz=0;
        cap=1;
    }
    void Push_Back(int x)
    {
        if(cap==sz)
        {
            Increase_Array();
        }
        arr[sz]=x;
        sz++;
    }

    void Insert_Element(int pos, int val)
    {
        if(cap==sz)
        {
            Increase_Array();
        }
        if(pos>sz)
        {
            cout<<"\n"<<pos<<" is out of bound\n";
            return ;
        }
        for(int i=sz;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=val;
        sz++;

    }

    void Delete_Element(int pos)
    {
        if(pos>=sz)
        {
            cout<<pos<<" is out of bound\n";
            return;
        }
        for(int i=pos+1;i<sz;i++)
        {
            arr[i-1]=arr[i];
        }
        sz-=1;

    }

    int get_size()
    {
        return sz;
    }

    int get_element_on_index(int indx)
    {
        return arr[indx];
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
    Array arr;
    cout<<"\nHow Many Element: ";
    int n;cin>>n;
    cout<<"\nElements are :\n";
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        arr.Push_Back(in);
    }
    cout<<"\nInsert Element in a certain position\n";
    cout<<"Insert Position: ";
    int position; cin>>position;
    cout<<"\nInsert Element: ";
    int elem; cin>>elem;
    arr.Insert_Element(position,elem);
    cout<<"\nThe Array becomes: \n";
    arr.print();
    cout<<"\nSize of the Array is: "<<arr.get_size()<<"\n";
    cout<<"Which Index element you want to find?";
    int indxx; cin>>indxx;
    cout<<"The element in position "<<indxx<<" is "<<arr.get_element_on_index(indxx)<<"\n";
    cout<<"\n\n";
    cout<<"\nSelect Index to delete the index element: ";
    int inndx; cin>>inndx;
    arr.Delete_Element(inndx);
    cout<<"\nAfter delete, the Array becomes: \n";
    arr.print();


}
