#include <stdio.h>
#include<string.h>
#include <stdlib.h>
///Öğrenci Bilgileri alınıyor..
 ///Ortalamalarını kendi içinde ,isimlerini  alfabetik olarak sıralıyor
struct u
{
    char ad[20],soyad[20];
    int ort;
} a[5];
int main()
{

    int i,j,temp;


    for(i=0; i<5; i++)
    {
        printf("\n%döğrencinin bilgieri\n",i+1);
        printf("ad girin");
        scanf("%s",a[i].ad);
        printf("soyad girin");
        scanf("%s",a[i].soyad);
        printf("ort girin");
        scanf("%d",&a[i].ort);
    }
    printf("******************");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[j].ort>a[j+1].ort)
            {


                temp=a[j].ort;
                a[j].ort=a[j+1].ort;
                a[j+1].ort=temp;
            }
        }
    }
    for(i=0; i<5; i++)
        printf("\n%d",a[i].ort);

    printf("******************");
    char temp2[20];
    for(i=1; i<5; i++)
    {

        for(j=1; j<5; j++)
        {
            if(strcmp(a[j-1].ad,a[j].ad)>0 )
            {
                strcpy(temp2,a[j-1].ad);
                strcpy(a[j-1].ad,a[j].ad);
                strcpy(a[j].ad,temp2);


            }


        }
    }



    for(i=0; i<5; i++)
    {
        printf("\n%s",a[i].ad);
    }

    return 0;
}
