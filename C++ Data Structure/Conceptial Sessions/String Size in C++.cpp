


#include<bits/stdc++.h>
using namespace std;


int main()
{
    string st="abcdefghksdfjk";
    cout<<st.size()<<endl;
    st.resize(5);
    cout<<st<<" "<<st.size()<<endl;
//    st.clear();
//    cout<<st<<" "<<st.size()<<endl;
    if(st.empty())
        cout<<"Khali\n";
    else
        cout<<"Ase\n";




    return 0;
}
