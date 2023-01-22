#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1test.txt");

    of<<"Hello TEST\n";

    ifstream ifs;
    ifs.open("inputSTREAM.txt");

    int x;
    double y,z;
    ifs>>x>>y>>z;
    cout<<"X IS"<<x<<endl<<"Y IS"<<y<<endl<<"Z IS:"<<z;
    ifs.close();
    of.close();

    return 0;

}
