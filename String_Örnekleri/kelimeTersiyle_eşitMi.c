#include <stdio.h>
#include <stdlib.h>
///string8
///klavyeen kelime gir tersten ve düzden eşit mi bul palindrome
int main()
{
    char a[20];
    int s,i,k=0;
    printf("kelime\n");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    for(s=0; s<i; s++)
    {
        if(a[s]==a[i-1])
        {
            i-=1;
            k=1;
        }
        else
        {         
          k=0;
          printf("eşit değil..");
          break;
        }
    }
    if(k==1)
     printf("eşit");
       
}
