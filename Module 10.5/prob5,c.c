#include <stdio.h>
int main()
{

    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;

    int prime_arr[N];
    int prime_arr_index=0;
    for(int i=0;i<N;i++){
        int prime_count=0;
        for(int j=2;j<=sqrt(arr[i]);j++){
            if(arr[i]%j == 0){
                prime_count+=1;
            }
        }
        if(prime_count == 0){
            count+=1;
            prime_arr[prime_arr_index]=arr[i];
            prime_arr_index++;
        }
    }

    printf("%d\n",count);
    for(int i=0;i<prime_arr_index;i++)
    {
        printf("%d ",prime_arr[i]);
    }
}
