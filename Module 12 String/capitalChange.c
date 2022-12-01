 #include<stdio.h>
 int main()
 {
     char name[100];
     fgets(name,sizeof(name),stdin);
     int i;
     for(i=0;name[i]!='\0';i++){
        printf("%d for %c\n",name[i],name[i]);
     }
     return 0;
 }
