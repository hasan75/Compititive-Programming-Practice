#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a={1,2,3};
    a.resize(10); //size will be 10,values will be 0
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    vector <int>b = {1,2,3,4,5};
    b.resize(3);
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<endl;
    }

}


