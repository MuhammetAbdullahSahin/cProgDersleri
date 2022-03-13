#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 1000

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dinamik Hafıza Operasyonları

void deger_ata(int* x,size_t size);
void yazdir(int* x,size_t size);


int main(){


    int a[100]; // 100 elemanlı bir dizi oluştur.

    int boyut;
    scanf("%d",&boyut);
    //int b[boyut]; // boyut değişkenine bağlı bir dizi oluştur. her sistem bu satırı çalıştırmayabilir.

    int* c = (int*) malloc(boyut * sizeof(int)); // boyut kadar integerlık yer ayır.

    printf("C dizisi\n");
    for(int i = 0; i<boyut; i++){
        c[i] = 0;
    }
    puts("");
    free(c);

    int* d = (int*) calloc(boyut,sizeof(int)); // boyut kadar integerlık yer ayır ve içlerine 0 yaz.
    free(d);
    // malloc, calloca göre daha hızlı çalışıyor.

    c = (int*) calloc(boyut,sizeof(int)); // boyut kadar integerlık yer ayır ve içlerine 0 yaz.
    d = (int*) malloc(boyut*sizeof(int));
    memset(d,0,boyut*sizeof(int));
    free(c);
    free(d);

    int* f = (int*) calloc(100,sizeof(int)); // boyut kadar integerlık yer ayır ve içlerine 0 yaz.
    //
    // çeşitli işlemlerden geçti
    //
    int *f_buyuk = (int*) realloc(f,150); // 100-150 arasını boş bırakarak hafızada yer tutar
    int *f_kucuk = (int*) realloc(f_buyuk,50);  // ilk 50 elemanı korur, öteki 50 elemana erişimimiz olmaz.



    // Önemli:
    // Her malloc, calloc veya realloc kullandığımızda FREE kullanmayı unutmamalıyız.
    // Her malloc, calloc veya realloc kullandığımızda NULL kontrolü yapmalıyız.

    if(f_kucuk != NULL){
        deger_ata(f_kucuk,50);
        yazdir(f_kucuk,50);
    }   


    free(f);
    printf("F dizisi, geri verildi\n");
    free(f_buyuk);
    printf("F buyuk, geri verildi\n");
    free(f_kucuk);
    printf("F kucuk, geri verildi\n");

    return 0;
}

void deger_ata(int* x,size_t size){
    for(int i = 0; i<size; i++){
        x[i] = i*i - 1;
    }
}
void yazdir(int *x, size_t size){
    for(int i = 0; i<size; i++){
       printf("%d ",x[i]);
    }
    puts("");

}