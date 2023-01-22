
#include<bits/stdc++.h>
using namespace std;

//vector is in Containers....

int main()
{
    int n; cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }

    int sz = v.size();
    cout<<sz<<"\n";

    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";

        //last element
    int lastEl = v.back();
    cout<<"\nlast element: "<<lastEl<<"\n";

    //delete last element
    v.pop_back();


    sz=v.size();
    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";

    return 0;
}
