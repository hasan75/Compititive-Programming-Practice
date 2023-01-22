#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int l=1;
    int h=n;
    int root=-1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(mid*mid<= n)
        {
            root=mid;
            low=mid+1;
        }
        else if(mid*mid >x)
        {
            h = mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<root<<"\n";
    return 0;
}
