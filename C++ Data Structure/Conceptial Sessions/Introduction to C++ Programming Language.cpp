#include<bits/stdc++.h>
using namespace std;
namespace one
{
            int x=10;
    void func()
    {

        cout<<"From One Namesace One, func "<<endl;
    }
}

namespace two
{
    int c=20;
    void func2()
    {
        cout<<"From Two Namesace Two, func2 "<<endl;
    }
}

using namespace one;
using namespace two;

int main()
{
//    one::func();
//    two::func2();
    one::x;
    cout<<x<<endl;

    func();
    func2();
    return 0;
}
