#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
long long check_moves(vector <int>a,long long n)
{
    long long  moves = 0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            continue;
        }
        if(a[i]<a[i-1])
        {
            moves+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    return moves;
}
int main()
{
    long long n;cin>>n;
    vector<int>a;
    a.resize(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    long long  moves = check_moves(a,n);
    cout<<moves<<"\n";
    return 0;
}

