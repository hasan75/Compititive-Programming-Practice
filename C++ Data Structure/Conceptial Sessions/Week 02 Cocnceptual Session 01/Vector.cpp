#include<bits/stdc++.h>
using namespace std;

//vector is in Containers....

int main()
{
    int n; cin>>n;

    //push back on vector


//    vector<int>v;
//    for(int i=0;i<n;i++)
//    {
//       int inpt;
//       cin>>inpt;
//       v.push_back(inpt);
//    }


    //if size is predefined
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }

    int sz = v.size();
    cout<<sz<<"\n";

    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";

        //front() to show 1sty element
    cout<<"\n\nFront El:"<<v.front()<<"\n";
    //back function to show last element
    int last_el = v.back();
    cout<<"Last Element: "<<last_el<<"\n";

    //delete last element
    v.pop_back();

    cout<<"\nAfter pop_back element size is: "<<v.size()<<"\n";

    sz=v.size();
    for(int i=0;i<sz;i++)
        cout<<v[i]<<" ";

    cout<<"\nBefore Clear, size is: "<<v.size()<<"\n";
    v.clear();
    cout<<"\nAfter Clear function, size is: "<<v.size()<<"\n";

    if(v.empty())
    {
        cout<<"\nVector Is Empty\n";
    }
    else{
        cout<<"\nVrctor is not empty\n";
    }

    return 0;
}
