#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in;a.push_back(in);
    }
    int m;cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++)
    {
       int in;cin>>in;b.push_back(in);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(b[j]<a[i]){cout<<b[j]<<" ";j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
    while(i<n){cout<<a[i]<<" ";i++;}
    while(j<m){cout<<b[j]<<" ";j++;}

    return 0;

}
