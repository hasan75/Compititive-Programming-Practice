#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin,s);
    int l = s.size();

    int r = 1,prerep=1;
    for(int i=0;i<l;i++)
    {
        if(i==0)
        {
            continue;
        }
        if(s[i]==s[i-1])
        {
            r+=1;
        }
        else{
            if(r>prerep) prerep=r;
            r=1;
        }
        if(i==(l-1))
        {
            if(r>prerep) prerep=r;
        }

    }
    cout<<prerep<<"\n";
    return 0;
}
