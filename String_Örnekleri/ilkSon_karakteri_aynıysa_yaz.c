#include <stdio.h>
#include <stdlib.h>
///string7
///ilk ve son karakteri aynı olanları listele
int main()
{
    char a[10][60];
    int i,j=0,s;
    for(i=0; i<10; i++)
    {
        printf("isim");
        scanf("%s",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        while(a[i][j]!='\0')
            j++;
        if(a[i][j-1]==a[i][0])
        {
            for(s=0; s<j; s++)
            {
                printf("%c",a[i][s]);
            }
            printf("\n");
        }
        j=0;
    }
    return 0;
}
