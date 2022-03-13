#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 1000

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Daha iyi bubbleSort

void bubbleSort(int* dizi, size_t boyut);
void diziyi_yazdir(int* dizi, size_t boyut);
void yer_degistir(int* birinciPtr, int* ikinciPtr);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1+rand()%10000;
    }
    int x,y;

    bubbleSort(dizi,boyut);
    diziyi_yazdir(dizi,boyut);
    return 0;
}

void bubbleSort(int* dizi, size_t boyut){
    unsigned int i,j;
    for(i=0;i<boyut;i++){
        for(j=0;j<boyut-1;j++){
            if(dizi[j] > dizi[j+1]){
                yer_degistir(&(dizi[j]), &(dizi[j+1]) );
            }
        }
    }
}

void yer_degistir(int* birinciPtr, int* ikinciPtr){
    int gecici = *birinciPtr;
    *birinciPtr = *ikinciPtr;
    *ikinciPtr = gecici;
}

void diziyi_yazdir(int dizi[],size_t boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<boyut;i++){        printf("%d ",dizi[i]);
    }
    puts("");
}