#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    /*
    int *x = new int; //heap the memory niye x e dibe
    *x=10;
    cout<<x<<"\n";
    cout<<*x<<"\n";
    */
    int n;
    cin>>n;
    int *x = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        //int* x--> *x
        //x[i] --> *x[i]
    }

    cout<<x<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\n";
    }
    delete []x; //this is for array memory
    //delete x; this is for single integer
    return 0;

}
