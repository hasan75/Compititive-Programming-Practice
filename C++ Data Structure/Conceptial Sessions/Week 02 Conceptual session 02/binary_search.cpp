#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int f; cin>>f;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in;
        v.push_back(in);
    }

    int low = 0;
    int high = n;
    int flag = 0;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(mid==f)
        {
            cout<<f<<" Found at Position: "<<mid<<"\n";
            flag=1;
            break;
        }
        else if(v[mid]>f)
        {
            high=mid-1;
        }
        else if(v[mid]<f)
        {
            low=mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"Not found\n";
    }

    return 0;
}
