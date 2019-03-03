#include <stdio.h>
#include <stdlib.h>
///string2
 ///metin gir içindeki a veya A sayısını döndersin
int main()
{
    int i=0;
    char a[50];
    int sayac=0;
    printf("metin");
    gets(a);
    while(a[i]!='\0'){
        if(a[i]=='a' || a[i]=='A')
        sayac+=1;i+=1;}
    printf("%d",sayac);

    return 0;
}
