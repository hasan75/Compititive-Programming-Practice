#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1; return 0;
    }

    if(n>3)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"NO SOLUTION";
    }

    return 0;
}
