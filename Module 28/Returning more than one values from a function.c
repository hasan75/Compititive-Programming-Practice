#include<stdio.h>

void func(int a,int b,int* p,int* q)
{
//    if(a>b)
//    {
//        *p=a;
//        *q=b;
//    }
//    else if(b>a)
//    {
//        *p=b;
//        *q=a;
//    }

    *p = a>b?a:b;
    *q = a<b?a:b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int l,s;

    func(a,b,&l,&s);
    printf("Large %d and Small %d\n",l,s);
    return 0;
}
