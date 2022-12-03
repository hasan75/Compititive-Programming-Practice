#include<stdio.h>
#include<math.h>

void is_beautiful(int n,int arr[]);

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    is_beautiful(n,arr);
    return 0;
}

void is_beautiful(int n,int arr[])
{
    int beauty=0;
    for(int i=0;i<n;i++)
    {
        int f=0;
        int n = *(arr+i);
        while(n!=0)
        {
            if(n%10==7)
            {
                f=1;
                break;
            }
            n/=10;
        }
        if(f)
        {
            beauty++;
        }
    }

    if(beauty >= (n/2))
        printf("Beautiful\n");
    else
        printf("Ugly\n");
}
