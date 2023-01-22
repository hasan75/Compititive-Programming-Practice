#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    int s = a.size();
    if(s<=1)
    {
        return a;
    }
    int mid = s/2;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid;i<s;i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);
    vector<int>sorted_a;
    int in1=0,in2=0;
    for(int i=0;i<s;i++)
    {
        if(in1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[in2]);
            in2++;
        }
        else if(in2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[in1]);
            in1++;
        }
        else if(sorted_b[in1]<sorted_c[in2])
        {
            sorted_a.push_back(sorted_b[in1]);
            in1++;
        }
        else{
            sorted_a.push_back(sorted_c[in2]);
            in2++;
        }
    }
    return sorted_a;
}
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> merge_sorted = merge_sort(a);

    for(auto val:merge_sorted)
    {
        cout<<val<<" ";
    }
    cout<<"\n";

    return 0;
}
