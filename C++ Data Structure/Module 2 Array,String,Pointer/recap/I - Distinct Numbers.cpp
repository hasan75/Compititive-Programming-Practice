#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a;
    a.resize(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int nums=0;
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            nums++;
            continue;
        }
        if(a[i]!=a[i-1])
        {
            nums++;
        }
    }
    cout<<nums<<"\n";

    return 0;
}

