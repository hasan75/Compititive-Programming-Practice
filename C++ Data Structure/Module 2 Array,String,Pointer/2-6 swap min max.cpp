
#include<iostream>
using namespace std;

int main()
{
    int a=5,b=6;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int mini = min(a,b);
    cout<<"MINIMUM: "<<mini<<endl;
    int maxi = max(a,b);
    cout<<"Max: "<<maxi<<endl;

    return 0;
}
