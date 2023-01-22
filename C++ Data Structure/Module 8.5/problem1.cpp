#include<bits/stdc++.h>
using namespace std;
vector<int> merged_two(vector<int>a,vector<int>b)
{
    vector<int>merged;
    int in1=0; int in2=0;
    for(int i=0;i<(a.size()+b.size());i++)
    {
        if(in1== a.size())
        {
            merged.push_back(b[in2]);in2++;
        }
        else if(in2==b.size())
        {
            merged.push_back(a[in1]); in1++;
        }
        else if(a[in1]>b[in2])
        {
            merged.push_back(a[in1]); in1++;
        }
        else
        {
            merged.push_back(b[in2]);in2++;
        }
    }

    return merged;

}
int main()
{
    int n,m;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int>merged_arr = merged_two(a,b);

    for(auto val:merged_arr)
    {
        cout<<val<<" ";
    }
    cout<<"\n";

    return 0;
}
