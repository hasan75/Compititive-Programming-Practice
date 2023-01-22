#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n= s.size();
    vector<char>v;
    bool f = true;
    for(int i=0; i<n; i++)
    {


        if(v.size()==0)
        {
            v.push_back(s[i]);
        }

        else
        {
            char c = v.back();
            if(c=='(' && s[i]==')')
            {
                v.pop_back();
            }
            else if(s[i]-c == 2)
            {
                v.pop_back();
            }
            else
            {
                v.push_back(s[i]);
            }
        }
    }

    if(v.size()==0)
    {
        f=true;
    }
    else
    {
        f=false;
    }

    return f;

}
int main()
{
    string s;
    getline(cin,s);
    cout<<isValid(s);


    return 0;


}

