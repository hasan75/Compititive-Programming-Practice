#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int indx=i;
        while(indx>=1)
        {
            if(a[indx]<a[indx-1])
            {
                swap(a[indx],a[indx-1]);
                indx--;
            }
            else{
                break;
            }
        }
    }

    for(auto val:a)
    {
        cout<<val<<" ";
    }

}
