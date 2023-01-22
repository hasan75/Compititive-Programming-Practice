#include<bits/stdc++.h>
using namespace std;

//vector is in Containers....

int main()
{
    int n; cin>>n;

    //push back on vector
    vector<int>v;
    for(int i=0;i<n;i++)
    {
       int inpt;
       cin>>inpt;
       v.push_back(inpt);
    }
    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";
    cout<<"\n";
    int sz = v.size();

    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";

    return 0;
}
