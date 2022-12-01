#include<stdio.h>
#include<string.h>

int
main ()
{
  int N;
  scanf ("%d", &N);
  int A[N+1], temp;
  for (int i = 0; i < N; i++)
    {
      scanf ("%d", &A[i]);
    }

  for (int j = 0; j < N; j++)
    {
      for (int k = 0; k < N - 1; k++)
    {
      if (A[k] < A[k + 1])
        {
          temp = A[k];
          A[k] = A[k + 1];
          A[k + 1] = temp;
        }
    }
    }


  int maxeven;

  for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 != 0)
    {
      continue;
    }
      maxeven = A[i];
      break;
    }

    int evencount=0,evensum=0,oddsum=0,oddcount=0;

    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 != 0)
    {
       oddsum+=A[i];
       oddcount++;
    }
    if(oddcount==2){
    break;
    }
    }

    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 == 0)
    {
       evensum+=A[i];
       evencount++;
    }
    if(evencount==2){
    break;
    }
    }

    int maxnum;

    if(oddsum %2 ==0){
    if (evensum > maxeven && evensum > oddsum)
    {
      maxnum=evensum;
    }
  else if(maxeven>oddsum){
    maxnum=maxeven;
}
else{
maxnum=oddsum;
}
    }
    else{
        if (evensum > maxeven)
        {
          maxnum=evensum;
        }
         else{
            maxnum=maxeven;
        }
    }
    {
      printf ("%d\n", maxnum);
    }
  return 0;
}
