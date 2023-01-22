#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini = min({a,b,c,d});
    cout<<"MINIMUM: "<<mini<<endl;
    int maxi = max({a,b,c,d});
    cout<<"Max: "<<maxi<<endl;

    return 0;
}
