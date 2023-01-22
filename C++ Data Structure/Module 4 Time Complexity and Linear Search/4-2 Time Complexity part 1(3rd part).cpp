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

    //i=0 --> 1 to n-1 -> n-1
    //i=1 --> 2 to n-1 --> n-2
    //i=2 --> 3 to n-1 --> n-3
    //i=n-1 --> 0 -> 0 --> 0

    //(n-1)+(n-2)+ 2+ 1 + 0.... = (n-1)(n)/2

    //n*n = n
    for(int i=0;i<n;i++)
    {
        string ans="No\n";
        for(int j=i+1;j<n;j++)
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

i=0 ,i=3 yes,
i=1, no,
i=2, no,
i=3, i=0 (as 0 is less than 3) so, no;

index = i;any index j,when j>i and a[i]==a[j];
*/

