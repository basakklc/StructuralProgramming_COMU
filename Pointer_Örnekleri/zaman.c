#include <stdio.h>
#include <stdlib.h>
///bir saniye arttır
///saat dakika ve saniye göderilsin ve 1 saniye attırıp ekrana bassın;
struct zaman
{
    int saat;
    int dakika;
    int saniye;
};
void birSaniyeArttir(struct zaman *ptr);
int main()
{
    struct zaman x;
    printf("bir saat girin ");
    scanf("%d",&x.saat);
    printf("bir dakika girin");
    scanf("%d",&x.dakika);
    printf("saniye girin ");
    scanf("%d",&x.saniye);
    birSaniyeArttir(&x);
    printf("saatiniz %d%d%d",x.saat,x.dakika,x.saniye);
    return 0;
}
void birSaniyeArttir(struct zaman *ptr)
{
    /*if(b.saniye<59)
        b.saniye=b.saniye+1;
    else if(b.saniye==59 && b.dakika==59 && b.saat<24){
        b.saniye=b.saniye-59;
        b.dakika=b.dakika-59;
        b.saat=b.saat+1;
    }
    printf("saatiniz %d%d%d",b.saat,b.dakika,b.saniye);*/
    ptr->saniye=ptr->saniye+1;
    if(ptr->saniye>=60){
        ptr->saniye=0;
        ptr->dakika=ptr->dakika+1;
        if(ptr->dakika>=60){
            ptr->dakika=0;
            ptr->saat=(ptr->saat+1);}

        }



}
