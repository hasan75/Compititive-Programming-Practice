
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int in; cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
    //sort from index 1 to index 2
    //a.end = a.begin()+a.size();
    sort(a.begin()+1,a.begin()+2+1);
    cout<<"After sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}

