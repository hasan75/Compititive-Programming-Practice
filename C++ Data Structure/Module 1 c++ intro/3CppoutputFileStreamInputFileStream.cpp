#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");
    of<<"Hello World\n";
    of2<<"Hello Output File 2\n";

    ifstream ifs;
    ifs.open("inputif.txt");
    int x;
    double y,z;
    ifs>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z<<endl;
    ifs.close();
    of.close();
    of2.close();


    double x2 = 3.44444;
    cout<<setprecision(2)<<fixed<<x2;
    return 0;
}
