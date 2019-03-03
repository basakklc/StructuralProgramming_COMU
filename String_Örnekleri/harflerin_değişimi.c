#include <stdio.h>
#include <stdlib.h>
///string4
 ///büyükharfler küçük harfe ,küçük harfler büyk harfe;
int main()
{
    int i=0,s;
    char metin[50];
    printf("metinn");
    gets(metin);
    while(metin[i]!='\0'){
        if(islower(metin[i]))
           metin[i]=toupper(metin[i]);
        else
            metin[i]=tolower(metin[i]);
        i+=1;}
    for(s=0;s<i;s++)
        printf("%c",metin[s]);
    return 0;
}
