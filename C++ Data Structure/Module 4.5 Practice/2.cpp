
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mul=1;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(i%2!=0)
            mul*=a;
    }
    cout<<mul<<"\n";
    return 0;
}
