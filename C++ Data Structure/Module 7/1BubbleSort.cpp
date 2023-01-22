
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
        int step=0;
        cout<<"For P= "<<p+1<<"\n";
        for(int j=0;j<=last-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                cout<<step+1<<"st step: ";
                for(int k=0;k<n;k++)
                {
                    cout<<a[k]<<" ";
                }
                cout<<"\n";
                step++;
                sorted = false;
            }
        }
        if(sorted)
        {
            break;
        }

        cout<<"\n"<<p+1<<"st Iteration:\n";
        for(int i=0;i<n;i++)
        {
            cout<<"     ";
            cout<<a[i]<< " ";
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<"\n";

    return 0;
}
