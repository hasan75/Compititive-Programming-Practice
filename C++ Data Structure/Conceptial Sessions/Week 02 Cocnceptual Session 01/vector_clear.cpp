#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        arr.push_back(in);
    }

    //back function()
    int last_el =arr.back();
    cout<<"\n"<<last_el<<"\n";
    cout<<"\n"<<arr.size()<<"\n";

    arr.clear();
    cout<<"\n"<<arr.size()<<"\n";

    return 0;

}
