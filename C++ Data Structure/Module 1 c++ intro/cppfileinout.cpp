#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    //cin>>s;
    getline(cin,s); //instead of cin
    cout<<s<<"\n";
    return 0;
}
