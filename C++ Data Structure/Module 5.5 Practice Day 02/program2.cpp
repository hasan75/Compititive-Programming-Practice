#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in;a.push_back(in);
    }
    sort(a.begin(),a.end());
    int q;cin>>q;

    int l=0;
    int h=n;
    while(q--)
    {
        int to_find;
        cin>>to_find;
        int f=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==to_find)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
            else if(a[mid]>to_find)
            {
                h=mid-1;
            }
            else if(a[mid]<to_find)
            {
                l=mid+1;
            }
        }
        if(f==0){cout<<"NO\n";}
    }

    return 0;
}
