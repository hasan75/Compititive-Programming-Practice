#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector <int> a;
    a.resize(n);
    long long int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<((n*(n+1))/2)- sum <<"\n";
    return 0;

}

