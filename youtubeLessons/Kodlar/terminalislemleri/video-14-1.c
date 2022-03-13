#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Terminal İşlemleri - 1 

void bubbleSort(int dizi[], size_t boyut);

// argc -> girilen argüman sayısı (arg counter)
// argv -> girilen argümanlar     (arg vector)

int main(int argc, char* argv[]){

    printf("%d\n",argc);
    int boyut = argc-1;
    int* sayilar = (int*) malloc(boyut*sizeof(int));
    int sayi;
    for(int i=1;i<argc;i++){
        sayi = atoi(argv[i]);
        sayilar[i-1] = sayi;
    }
    bubbleSort(sayilar,boyut);
    for(int i=0;i<boyut;i++){
        printf("%d ",sayilar[i]);
    }

    return 0;
}


void bubbleSort(int dizi[], size_t boyut){
    // Bubble sort ile diziyi sıralayalım
    int i,j,gecici;
    for(i=1;i<boyut;i++){
        for(j=0;j<boyut-1;j++){
            if(dizi[j] > dizi[j+1]){
                gecici=dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
}