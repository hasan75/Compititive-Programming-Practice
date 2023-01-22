#include<bits/stdc++.h>
using namespace std;

/*

Time Complexity: O(n+n^2)= O(n^2) );

Memory Complexity: O(n);

*/
int main()
{

    //order n size array
    //input  nums, show max,min,sum;

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    //i=0 --> n
    //i=1 --> n
    //i=2 --> n
    //i=n-1 --> n

    //n*n = n
    for(int i=0;i<n;i++)
    {
        string ans="No\n";
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                ans="Yes\n";
            }
        }
        cout<<"i = "<<i<<" "<<ans;
    }

}

/*
n
2 4 6 2

i=0 ,yes,
i=1, no,
i=2, yes,
i=3, no


*/
