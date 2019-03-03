#include <stdio.h>
#include <stdlib.h>
///pointer2
 ///dizinin içinde istenilen elemanın olup olmadığını bulma

void fon(int b[3][3])
{
    int ara,x;
    int i,j;
    printf("hangi değer aransın");
    scanf("%d",&ara);
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(ara==b[i][j])
            {
              x=0;
              printf("%d satır %d sutundadır :",i,j);
            }    
            else
            {
                x=1;
                continue;
            }
    	}
    }
    if(x==1)
            printf("değer ypktur");
}

int main()
{
    int i,j;
    int a[3][3];
    for(i=0;i<3;i++){
        for (j=0;j<3;j++)
        {
            printf("bir sayı giriniz");
            scanf("\n%d",&a[i][j]);
        }
    }
    fon(a);
    return 0;
}
