#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;

    if(n==1)
        return 1;

    return n*factorial(n-1);
}

int main()
{
    string s;
    getline(cin,s);
    int len = s.size();
    vector<int>freq;
    freq.resize(27);
    for(int i=0; i<len; i++)
        freq[s[i]-'a'+1]++;

    int totalChar = 0,fact_divide = 1;

    for(int i=1; i<=26; i++)
    {
        if(freq[i]>0)
        {
            totalChar++;
            if(freq[i]>1)
            {
                fact_divide*=factorial(freq[i]);
            }
        }
    }
    if(totalChar==1)
    {
        cout<<1<<"\n";
    }
    else
    {
        cout<< factorial(len)/fact_divide<<"\n";
    }

    return 0;
}

