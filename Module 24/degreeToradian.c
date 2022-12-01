#include<stdio.h>
#include<math.h>
int take_degree()
{
    int angle;
    scanf("%d",&angle);
    return angle;
}
void calculate_degree(int a)
{
    float radian = a*(3.14159/180);
    printf("%d degree in Radian is %.3f\n",a,radian);
}
void solve()
{
    int angle = take_degree();
    calculate_degree(angle);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
