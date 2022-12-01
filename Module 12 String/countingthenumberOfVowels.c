#include <Stdio.h>
int main()
{
    char sen[1000],count=0;
    int i=0;
    fgets(sen,sizeof(sen),stdin);
    while(sen[i]!='\0'){
            //vowel hole counter ++
            if(sen[i]=='a'|| sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u'){
                count++;
            }
            i++;

    }
    printf("Number of viwels: %d",count);

}
