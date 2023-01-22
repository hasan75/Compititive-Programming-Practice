
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in; cin>>in;
        a.push_back(in);
    }
    int m;cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++)
    {
        int im; cin>>im;
        b.push_back(im);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }

    return 0;
}
