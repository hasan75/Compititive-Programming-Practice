#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);
    }
    int sz= v.size();

    for(int i=0;i<sz;i++)
    {
        cout<<v[i]<<" ";
    }

    int minn = *min_element(v.begin(),v.end());


    vector<int>::iterator index = min_element(v.begin(),v.end());

    cout<< "\nIndex of min element is: "<<distance(v.begin(),index)<<"\n";


    int maxx = *max_element(v.begin(),v.end());

    cout<<"\nMin Element: "<<minn<<"\nMax Element: "<<maxx<<"\n";

    return 0;

}
