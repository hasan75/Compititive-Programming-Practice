#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("testinfile.txt");
    int x;float y,z;
    ifs>>x>>y>>z;
    cout<<x<<endl<<y<<endl<<z;

    ofstream of;
    of.open("testof.txt");
    of<<x<<"\n"<<y<<"\n"<<z;

    ifs.close();
    of.close();

    return 0;
}
