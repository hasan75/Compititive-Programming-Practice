#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int q;
    cout<<"\nHow many queries: ";
    cin>>q;
    while(q--)
    {
        int k;
        cout<<"\nEnter the number you want to find :";
        cin>>k;
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
    }

    return 0;
}



/*
n- lenght array;
q- query;
k=y/n by index;





*/

