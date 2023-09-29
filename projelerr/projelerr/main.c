#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

struct ogrenci{
    int numara;
    char ad[20];
    char soyad[20];
    int vize;
    
};
int main(void){
    //5 adet öğrenci kaydı için bellekte yer ayırıldı
    struct ogrenci *ogrPtr=(struct ogrenci *) malloc(5*sizeof(struct ogrenci));
    //*ogrPtr yi *ptr'ye kopyalandı
    struct ogrenci *ptr=ogrPtr;
    int i=0;
    int numara;
    char ad[20];
    char soyad[20];
    int vize;
    
    printf("5 adet oğrenci için bellekte yer ayrıldı\n");
    
    while (i<5) {
        //Ogrenci'nin bilgileri girildi
        printf("%d. ogrenci bilgilerini giriniz : \n",i+1);
        printf("Numara : ");
        scanf("%d",&numara);
        printf("Ad     : ");
        scanf("%s",ad);
        printf("Soyad  : ");
        scanf("%s",soyad);
        printf("Vize   : ");
        scanf("%d",&vize);
        
        //Belleğe bu değerler kopyalandı
        
        ptr->numara=numara;
        strcpy(ptr->ad,ad);
        strcpy(ptr->soyad,soyad);
        ptr->vize=vize;
        
        i++;
        ptr++;
    }
    
    ptr=ogrPtr;
    i=0;
    
    printf("Öğrenci kayıt işlemi tamamlandı kayıtlı öğrencilerin bilgileri : \n");
    //Kayıt edilen öğrenciler çıktı da gösterildi
    while (i<5) {
        printf("%d. numaralı ogrenci bilgileri : \n",ptr->numara);
        printf("Ad     : %s\n",ptr->ad);
        printf("Soyad  : %s\n",ptr->soyad);
        printf("Vize   : %d\n",ptr->vize);
        printf("**************************\n");
        
        i++;
        ptr++;
    }
    //8 adet öğrenci kaydı için bellek yeri genişletildi
    ogrPtr=(struct ogrenci *) realloc (ogrPtr,(8*sizeof(struct ogrenci)));
   
    //6.öğrenciden başlamakta. 5 kayıt yerinde durmakta
    ptr = ogrPtr +5;
    i=5;
    
    while (i<8) {
        printf("%d. ogrenci bilgilerini giriniz : \n",i+1);
        printf("Numara : ");
        scanf("%d",&numara);
        printf("Ad     : ");
        scanf("%s",ad);
        printf("Soyad  : ");
        scanf("%s",soyad);
        printf("Vize   : ");
        scanf("%d",&vize);
        
        ptr->numara=numara;
        strcpy(ptr->ad,ad);
        strcpy(ptr->soyad,soyad);
        ptr->vize=vize;
        
        i++;
        ptr++;
    }
    ptr=ogrPtr;
    i=0;
    
    printf("Öğrenci kayıt işlemi tamamlandı kayıtlı öğrencilerin bilgilerini içeren son durum : \n");
    //Tüm kayıt edilen öğrenciler çıktı da gösterildi
    while (i<8) {
        printf("%d. numaralı ogrenci bilgileri : \n",ptr->numara);
        printf("Ad     : %s\n",ptr->ad);
        printf("Soyad  : %s\n",ptr->soyad);
        printf("Vize   : %d\n",ptr->vize);
        printf("**************************\n");
        
        i++;
        ptr++;
    }
    printf("\n\n");
    return 0;
}

