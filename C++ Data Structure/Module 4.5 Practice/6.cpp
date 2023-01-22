#include<bits/stdc++.h>
using namespace std;

class Cuboid
{
private:
    double length;
    double width;
    double height;


public:
    double volume;
    double surface;
//    Cuboid()
//    {
//
//    }
    Cuboid()
    {
        length=0;
        width=0;
        height=0;
    }
    Cuboid(double l,double w,double h)
    {
        length=l;
        width=w;
        height=h;
        volume = getVolume(length,width,height);
        surface = getSurfaceArea(length,width,height);
    }
    double getVolume(double l,double w,double h)
    {
        return l*w*h;
    }
    double getSurfaceArea(double l,double w,double h)
    {
        return 2*l*w+2*l*h+2*h*w;
    }

    void print()
    {
        cout<<"Cubic Length : "<<length<<" Width : "<<width<<" Height : "<<height<<" Volume : "<<volume<<" Surface Area : "<<surface<<"\n\n";
    }

};

bool comp_on_volume(Cuboid one, Cuboid two)
{
    return one.volume<two.volume;
}

bool comp_on_area(Cuboid one, Cuboid two)
{
    return one.surface<two.surface;
}
int main()
{
    int n;
    cin>>n;
    vector<Cuboid>c;
    for(int i=0;i<n;i++)
    {
        double h,l,w;
        cin>>l>>w>>h;
        c.push_back(Cuboid(h,l,w));
    }

    sort(c.begin(),c.end(),comp_on_volume);
    cout<<"Comparing to Volume:\n";
    for(auto val:c)
    {
        val.print();
    }

    cout<<"\n\n";
    sort(c.begin(),c.end(),comp_on_area);
    cout<<"Comparing to Area:\n";
    for(auto val:c)
    {
        val.print();
    }
}
