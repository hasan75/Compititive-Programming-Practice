#include<stdio.h>
int main() {
   int row=3,col=3;
   int m[row][col];
   int i=0,j=0;
   int sum, sum1, sum2;
   int flag = 0;

   for (i=0;i<row;i++) {
      for (j=0;j<col;j++)
         scanf("%d",&m[i][j]);
   }


   sum = 0;
   for (i=0;i<row;i++) {
      for (j=0;j<col;j++) {
         if (i == j)
            sum = sum + m[i][j];
      }
   }


   for (i=0;i<row;i++) {
      sum1 = 0;
      for (j=0;j<col;j++) {
         sum1 = sum1 + m[i][j];
      }
      if (sum == sum1){
         flag = 1;
      }
      else {
         flag = 0;
         break;
      }
   }

   for (i=0;i<row;i++) {
      sum2 = 0;
      for (j=0;j<col;j++) {
         sum2 = sum2 + m[i][j];
      }
      if (sum == sum2)
      {
         flag = 1;
      }
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
    {
      printf("YES");
    }

   else
   {
      printf("NO");
   }


   return 0;
}
