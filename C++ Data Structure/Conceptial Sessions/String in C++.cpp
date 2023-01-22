
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string st; //dynamic array;
    st="asas";
    cout<<st.capacity()<<endl;
    st="asdasdasdasjhfsdghfhsdf";
    cout<<st.capacity()<<endl;
    cout<<"Max Size: "<<st.max_size()<<endl;


    string neww(10,'z');
    cout<<neww<<endl;

    string s1="abcd";
    string s2="efgh";
    string s3=s1+s2;
    cout<<s3<<endl;



    return 0;
}
