#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int l=1;
    long long int h=n;
    long long ans;
    while(l<=h)
    {
        long long mid = l+(h-l)/2;
        if(mid*mid <= n)
        {
            ans=mid;
            l=mid+1;
        }
        else if(mid*mid>n)
        {
            h=mid-1;
        }
        else{l=mid+1;}
    }
    return ans;
}
