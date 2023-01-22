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
    int maxx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxx)
        {
            maxx = a[i];
        }
    }

    vector<int>ar;
    ar.resize(maxx);


    int nums=0;

    for(int i=0;i<n;i++)
    {
        ar[a[i]]++;
    }

    for(int i=0;i<=maxx;i++)
    {
        if(ar[i]>0)
        {
            nums++;
        }
    }

    cout<<nums<<"\n";


    return 0;
}

