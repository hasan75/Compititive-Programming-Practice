#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mini = min(a,b);
    int minim = min(mini,c);
    cout<<"MINIMUM: "<<minim<<endl;
    int maxi = max(a,b);
    int maxim = max(maxi,c);
    cout<<"Max: "<<maxim<<endl;

    return 0;
}
