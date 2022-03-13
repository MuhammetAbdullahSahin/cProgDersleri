#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 15

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyonlara Dizi Göndermek


// eğer boyutu dizi[boyut] olarak verirsek, derleyici
// boyutun 0'dan büyük olup olmadığını kontrol edip
// sonra boyut değişkenini unutuyor. Bu yüzden
// ayrı vermemiz gerekiyor.
void diziyi_yazdir(int dizi[],size_t boyut);
int dizinin_toplami(int dizi[], size_t boyut); 
void diziyi_degistir(int dizi[], size_t boyut); // default olarak pass by reference oluyor.

// void diziyi_yazdir(const int dizi[], size_t boyut); // const kelimesi, gelecek olan diziyi değiştirmeyeceğimizi belirtiyor.
// int dizinin_toplami(const int dizi[], size_t boyut);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1+rand()%100;
    }
    
    diziyi_yazdir(dizi,boyut);
    printf("Toplam: %d\n",dizinin_toplami(dizi,boyut));


    diziyi_degistir(dizi,boyut);
    diziyi_yazdir(dizi,boyut);
    printf("Toplam: %d\n",dizinin_toplami(dizi,boyut));


	return 0;

}

int dizinin_toplami(int dizi[], size_t boyut){
    int toplam = 0;
    size_t i=0;
    for(i; i<boyut; i++){
        toplam += dizi[i];
    }
    return toplam;
}

void diziyi_yazdir(int dizi[],size_t boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    puts("");
}

void diziyi_degistir(int dizi[], size_t boyut){
    size_t i;
    for(i=0; i<boyut; i++){
        dizi[i] -= 30;
    }
}