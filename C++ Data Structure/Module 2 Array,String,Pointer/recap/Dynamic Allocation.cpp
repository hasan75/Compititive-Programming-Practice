#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* x = new int[n];
    for(int i=0;i<n;i++)
        cin>>x[i];

    for(int i=0;i<n;i++)
        cout<<x[i]<<"\n";

    delete[]x;
    return 0;
}