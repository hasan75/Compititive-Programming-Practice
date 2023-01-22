#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    string s="Here we go again!";
    s.erase(s.begin());
    s.pop_back();
    cout<<s<<endl;

}
