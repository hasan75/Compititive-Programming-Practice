

#include<bits/stdc++.h>
using namespace std;


int main()
{
//    int *p = (int*)malloc(10*sizeof(int));
//    for(int i=0;i<10;i++)
//        cout<<p[i]<<" ";
//    free(p)

    int *ptr = new int[10];

//    int *ptr = new int[10]{0};

    for(int i=0;i<10;i++)
        cin>>ptr[i];

    for(int i=0;i<10;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr;

    return 0;
}
