#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l = s.size();
    for(int i=0; i<l; i++)
    {
        if(i%2==0)
        {
            if(s[i]>=97 && s[i]<122)
            {
                s[i]+=1;
            }
            else if(s[i]==122)
            {
                s[i]-=25;
            }
        }
    }

    cout<<s<<"\n";
    return 0;
}

