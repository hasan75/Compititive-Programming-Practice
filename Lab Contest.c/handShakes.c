#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int handShakes = (N*(N-1))/2;
    printf("%lld",handShakes);

    return 0;
}
