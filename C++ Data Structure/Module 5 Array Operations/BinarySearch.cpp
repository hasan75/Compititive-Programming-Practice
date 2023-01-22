#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        int l=0,h=n-1;
        bool f = 0;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(a[mid] == k)
            {
                cout<<k<<" is found at position: "<<mid<<"\n";
                f=1;
                break;
            }
            else if(a[mid]>k)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(!f) cout<<k<<" Not Found\n";
    }

    return 0;
}
