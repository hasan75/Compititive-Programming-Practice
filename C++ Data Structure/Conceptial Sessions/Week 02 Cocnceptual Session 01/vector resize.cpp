
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

    //resize
    v.resize(10,6 );
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<"\n";

    return 0;
}
