#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    //getline(cin,s);
    s = "Here we go!";
    int length = s.size();
    cout<<"length:"<<length<<endl;
    //shifting one character up ;; A-->B, B-->C;
    /*
    for(int i=0;i<length-1;i++)
    {
        s[i]+=1;
    }
    cout<<s;
    */

    //for deleting last character
    s.pop_back();

    //for deleting any character
    s.erase(s.begin()+1); //deleting index 1 character
    cout<<s<<endl;
    return 0;


}
