#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;
    for(int i=0;i<5;i++)
    {
        cout<<"Before push"<<a.size()<<endl;
        a.push_back(i);
        cout<<"After push"<<a.size()<<endl;

    }

    a.insert(a.begin()+1, 100); //insert in position 1

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    //a.erase(a.begin());
    a.pop_back();
    cout<<"After delete"<<endl;
        for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

}


