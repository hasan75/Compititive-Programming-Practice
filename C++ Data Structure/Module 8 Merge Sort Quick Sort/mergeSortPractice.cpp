#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;

    vector<int>b;
    vector<int>c;

    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++)
    {
        c.push_back(a[i]);
    }

    vector<int>merged_b = merge_sort(b);
    vector<int>merged_c = merge_sort(c);

    vector<int>merged_a;

    int in1=0;
    int in2=0;
    for(int i=0;i<a.size();i++)
    {
        if(in1== merged_b.size())
        {
            merged_a.push_back(merged_c[in2]);
            in2++;
        }
        else if(in2 == merged_c.size())
        {
            merged_a.push_back(merged_b[in1]);
            in1++;
        }
        else if(merged_b[in1]<merged_c[in2])
        {
            merged_a.push_back(merged_b[in1]);
            in1++;
        }
        else
        {
            merged_a.push_back(merged_c[in2]);
            in2++;
        }
    }

    return merged_a;

}
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>merged = merge_sort(a);
    for(int i=0;i<merged.size();i++)
    {
        cout<<merged[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
