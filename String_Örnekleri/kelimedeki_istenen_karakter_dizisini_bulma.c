#include <stdio.h>
#include <stdlib.h>
#include<string.h>
///string6
///klavyeden 10 adet isim içinden an ile bitenlerini bulan kod
int main()
{
    char a[10][20];
    int i=0,j=0,s;
    for (i=0; i<10; i++)
    {


        {
            printf("ad girin");
            scanf("%s",&a[i]);
        }
    }
    for (i=0; i<10; i++)
    {
        while(a[i][j]!='\0')
        {
            j++;
        }
        if(a[i][j-1]=='n' && a[i][j-2]=='a')
        {

            for(s=0; s<j; s++)
                printf("%c",a[i][s]);
            printf("\n");
        }



        j=0;

    }

    return 0;
}
