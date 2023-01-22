#include<bits/stdc++.h>
using namespace std;
int x=5;

int func(int x)
{
    return x*2;
}

namespace info{
    int x=10;
    int func(int x)
    {
        return x*3;
    }
}
int main()
{
    int x=10;
    cout<<"X from Info "<<info::x<<endl;
    int xa = info::func(x);
    cout<<xa<<endl;
    return 0;
}
