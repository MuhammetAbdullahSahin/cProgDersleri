#include <stdio.h>
#include <stddef.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Değişken boyutlu diziler

void yazdir_bir_boyut(size_t boyut, const int dizi[]);
void yazdir_iki_boyut(size_t satir, size_t sutun,const int dizi[satir][sutun]);

int main(){
    size_t boyut;
    printf("1-Boyutlu dizinin boyutunu girin:");
    scanf("%d",&boyut);

    size_t satir,sutun;
    printf("2-Boyutlu dizinin satır sayısını girin:");
    scanf("%d",&satir);
    printf("2-Boyutlu dizinin sütun sayısını girin:");
    scanf("%d",&sutun);
  
    int bir_boyutlu[boyut]; // kullanıcıdan alınan boyut kadar yer ayır.
    int iki_boyutlu[satir][sutun]; // kullanıcıdan alınan satır ve sütun kadar yer ayır.
    size_t i,j;
    for(i=0;i<boyut;i++){
        bir_boyutlu[i] = 3*i + 5;
    }

    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            iki_boyutlu[i][j] = 2*i + 5*j - 7;
        }
    }

    yazdir_bir_boyut(boyut, bir_boyutlu);
    yazdir_iki_boyut(satir,sutun,iki_boyutlu);

	return 0;
}

void yazdir_bir_boyut(size_t boyut, const int dizi[]){
    size_t i;
    for(i=0;i<boyut;i++){
        printf("%6d",i);
    }
    printf("\n\n");
    for(i=0;i<boyut;i++){
        printf("%6d", dizi[i]);
    }
    puts("");
}


// İki boyutlu diziyi düzgün yazdırabilmek için yardımcı fonksiyon
void yazdir_iki_boyut(size_t satir, size_t sutun,const int dizi[satir][sutun]){
    size_t i,j;
    printf("\n\t");
    for(j=0;j<sutun;j++){
        printf("%6d",j);
    }
    printf("\n\n");

    for(i=0;i<satir;i++){
        printf("%d\t",i);
        for(j=0;j<sutun;j++){
            printf("%6d", dizi[i][j]);
        }
        puts("");
    }
    puts("");
}