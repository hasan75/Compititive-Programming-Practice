#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int in; cin>>in;
        arr.push_back(in);
    }
    int len = arr.size();

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
