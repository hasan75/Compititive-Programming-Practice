#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in; a.push_back(in);
    }
    for(int i=1;i<n;i++)
    {
        int indx=i;
        while(indx>=1)
        {
            if(a[i]<a[i-1])
            {
                swap(a[i],a[i-1]);
            }
            else{break;}
        }
    }

    for(auto val:a)
    {
        cout<<val<<" ";
    }
    cout<<"\n";

    return 0;
}
