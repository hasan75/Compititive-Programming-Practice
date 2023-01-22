#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l = 0, h=n-1;
    bool flag = 0;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==k)
        {
            cout<<"Found at position: "<<mid<<"\n";
            flag=1;
            break;
        }
        else if(a[mid]>k)
            h=mid-1;
        else
            l=mid+1;
    }
    if(!flag) cout<<"Not Found\n";

    return 0;
}

