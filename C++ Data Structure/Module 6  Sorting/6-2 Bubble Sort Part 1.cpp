#include<bits/stdc++.h>
using namespace std;

/*

Memory Complexity: O(n);
Time COmplexity: O(n^2);

*/

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int p=0;p<n;p++)
    {
        bool sorted = true;
        int last = n-1-p;
        for(int j=0;j<= last-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = false;
            }
        }
        if(sorted)
        {
            break;
        }

        cout<<"after pass: "<<p<<"  ::  ";
        for(int i=0;i<n;i++)
            cout<<a[i]<< " ";
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<"\n";

    return 0;
}
