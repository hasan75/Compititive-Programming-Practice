#include<iostream>
#include<fstream>
using namespace std;


string eraseFirstLast(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}


//function with memory address
void eraseFirstLastAgain(string &s)
{
    s.erase(s.begin());
    s.pop_back();
}

int main()
{

    string s;
    getline(cin,s);

    string s1;
    getline(cin,s1);

    cout<<eraseFirstLast(s)<<endl;


    eraseFirstLastAgain(s1);
    cout<<s1<<endl;

}
