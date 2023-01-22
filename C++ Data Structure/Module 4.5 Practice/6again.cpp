#include<bits/stdc++.h>
using namespace std;
class Cuboid{
 private:
     double length, width, height;
 public:
    double volume, surface_area;
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
        volume=getVolume(l,w,h);
        surface_area=getSurfaceArea(l,w,h);
    }
    void print()
    {
        cout<<"Cuboid Length : "<<length<<" Width : "<<width<<" Height : "<<height<<" Volume : "<<volume<<" Surface Area : "<<surface_area<<"\n";
    }
    double getVolume(double l,double w, double h)
    {
        return l*w*h;
    }
    double getSurfaceArea(double l,double w, double h)
    {
        return 2*l*w + 2*l*h + 2*h*w;
    }
};


bool compare_to_volume(Cuboid one, Cuboid two)
{
    return one.volume<two.volume;
}
bool compare_to_surface(Cuboid one, Cuboid two)
{
    return one.surface_area<two.surface_area;
}
int main()
{
    int n;
    cout<<"How many Cuboid?\n";
    cin>>n;
    vector<Cuboid>c;
    for(int i=0;i<n;i++)
    {
        double l,w,h;
        cin>>l>>w>>h;
        c.push_back(Cuboid(l,w,h));
    }
    cout<<"\nAccording to Volume\n\n";
    sort(c.begin(),c.end(),compare_to_volume);
    for(auto val:c)
    {
        val.print();
    }

    cout<<"\n\nAccording to Surface Area\n\n";
    sort(c.begin(),c.end(),compare_to_surface);
    for(auto val:c)
    {
        val.print();
    }
}
