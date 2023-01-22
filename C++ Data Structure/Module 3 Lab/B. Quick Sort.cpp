#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int pos_one;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                pos_one = i;
                break;
            }
        }
        int cnt=1,num=1;
        for(int i=pos_one+1;i<n;i++)
        {
            if(a[i]==num+1)
            {
                cnt++;
                num++;
            }
        }
        float res = ceil((n-cnt)/k);
        cout<<res<<"\n";
    }
}
