

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);
    }
    int sz= v.size();
    cout<<"\nSize is: "<<sz<<"\n";

    //vector<int>:: iterator it;
    auto it = v.begin();

    for(it=v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\nwith for each loop\n";
//for each loop syntax
    for(auto val:v)
    {
        cout<<val<<" ";
    }


    cout<<"\n";

    return 0;
}
