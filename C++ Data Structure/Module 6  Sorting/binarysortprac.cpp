#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in;a.push_back(in);
    }
    int l=0;
    int h=n;
    int f=0;
    while(l<=h)
    {
        int mid = l +(h-l)/2;
        if(a[mid]== q)
        {
            cout<<q<<" found at position: "<<mid<<"\n";
            f=1;
            break;
        }
        if(a[mid]>q)
        {
            h=mid-1;
        }
        else if(a[mid]<q)
        {
            l=mid+1;
        }
    }
    if(!f)
    {
        cout<<q<<" not found\n";
    }

    return 0;
}
