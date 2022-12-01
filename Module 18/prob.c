#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int n,ans=0;
        scanf("%d",&n);
        getchar();
        char b_num[1001];
        fgets(b_num,sizeof(b_num),stdin);
        for(int j=0;j<n;j++)
        {
            if(b_num[j]=='1' && b_num[j+1]=='0')
            {
                ans++;
            }
            else if(b_num[j]=='0' && b_num[j+1]=='1')
            {
                ans++;
            }
        }
        printf("%d",ans);
    }
    return 0;
}
