


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


    cout<<"Sorting after ascending order: \n";
    sort(v.begin(),v.end());
    for(auto val:v)
        cout<<val<<" ";

    cout<<"\n\n";

    //sort(v.rbegin(),v.rend());
    sort(v.begin(),v.end(),greater<int>());
    cout<<"Decending Order: \n";
    for(auto val:v)
        cout<<val<<" ";


    cout<<"\n";

    return 0;
}
