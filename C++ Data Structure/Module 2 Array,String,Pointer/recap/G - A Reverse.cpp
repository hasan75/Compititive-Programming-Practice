#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    getchar();
    string s;
    getline(cin,s);
    reverse((s.begin()+(l-1)),s.begin()+(r));
    cout<<s<<"\n";

    return 0;
}

