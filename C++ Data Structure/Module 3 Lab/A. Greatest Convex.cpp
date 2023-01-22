#include<iostream>
#include<cmath>
using namespace std;

void solve()
{
    int k;
    cin>>k;
    if(k>1)
    {
        cout<<k-1<<"\n";
    }
    else{
        cout<<"-1"<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
