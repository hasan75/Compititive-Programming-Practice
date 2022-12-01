#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int unique_array[n];
    int unique_array_index = 0;
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(unique_array[j]==arr[i]){
                found=1;
            }
        }
        if(found==0){
            unique_array[unique_array_index]= arr[i];
            unique_array_index++;
        }
    }

  printf("%");
    for(int i=0;i<unique_array_index;i++){
        printf("%d ",unique_array[i]);
    }

}
