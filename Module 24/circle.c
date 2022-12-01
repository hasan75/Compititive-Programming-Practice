#include<stdio.h>

int take_radius()
{
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    return r;
}

float calculate_area(int r)
{
    float area = 3.1416*r*r;
    printf("%f\n",area);
}

void solve()
{
    int r=take_radius();

    calculate_area(r);

}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}

