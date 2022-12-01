#include<stdio.h>
#include<string.h>
#include<math.h>
float get_pi(void)
{
    return 3.1416;
}
int main(void)
{
    float pi = get_pi();
    printf("%.4f",pi);

    return 0;

}
