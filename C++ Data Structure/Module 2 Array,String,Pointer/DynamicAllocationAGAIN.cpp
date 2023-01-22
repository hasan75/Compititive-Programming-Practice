#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int* x = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<x<<endl;
    //delete x;
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
    delete []x;
    return 0;
}
