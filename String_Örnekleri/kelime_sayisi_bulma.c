#include <stdio.h>
#include <stdlib.h>
///string1
 ///metin gir kaç kelime oldugunu bul.
int main()
{
    char metin[255];
    int i=0,kelime=1;
    printf("metin giriniz");
    gets(metin);
    while(metin[i]!='\0')
    {
        if(metin[i]==' ')
            kelime=kelime+1;
        i+=1;
    }
    printf("%d",kelime);
    return 0;
}
