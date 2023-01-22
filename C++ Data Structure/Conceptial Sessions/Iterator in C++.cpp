

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string st="abcdefghksdfjk";
    string::iterator it;
//    for(it=st.begin();it!=st.end();it++)
//        cout<<*it<<" ";
//    cout<<"\n\n";
//    string::reverse_iterator it1;
//    for(it1=st.rbegin();it1!=st.rend();it1++)
//        cout<<*it1<<" ";
//auto replaces std::reverse_iterator
    for(auto it1=st.rbegin();it1!=st.rend();it1++)
        cout<<*it1<<" ";



    return 0;
}
