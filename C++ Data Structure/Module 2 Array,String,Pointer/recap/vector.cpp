#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>arr;
    arr.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    return 0;
}