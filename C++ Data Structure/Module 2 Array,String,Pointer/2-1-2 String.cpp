#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<s.size(); //for string size
    string s2;
    getline(cin,s2);
    string s3 = s +" "+ s2;
    cout<<s3<<endl;
    return 0;
}
