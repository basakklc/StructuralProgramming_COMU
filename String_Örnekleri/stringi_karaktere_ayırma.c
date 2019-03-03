#include <stdio.h>
#include <stdlib.h>
///string10
///betul b-be-bet...-betul
int main()
{
    char a[10][10];
    int i,j=0,s=0;
    printf("kkelime  ");
    gets(a);
    i=strlen(a);

    while(s<i)
    {
        for(j=0; j<=s; j++)
        {

            printf("%c",a[0][j]);


        }
        printf("\n");
        s++;
    }
    return 0;
}
///****************************************************


