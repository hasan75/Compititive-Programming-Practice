#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],sum=0,mul=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        mul*=a[i];
    }

    cout<<"SUM: "<<sum<<endl;
    cout<<"MULTIPLICATION: "<<mul<<endl;
    return 0;
}
