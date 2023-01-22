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
    while(!(v.empty()))
    {
        cout<<v.back()<<", ";
        v.pop_back();
        cout<<"size becomes: "<<v.size()<<"\n";
    }
    return 0;
}
