#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 1000

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Daha iyi bubbleSort

void bubbleSort(int* const dizi, const size_t* const boyut); // sabit bir pointer, değişebilen bir veriye işaret ediyor.
void diziyi_yazdir(const int* dizi, const size_t* const boyut);
void yer_degistir(int* const birinciPtr, int* const ikinciPtr);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1+rand()%10000;
    }
    
    bubbleSort(dizi,&boyut);
    diziyi_yazdir(dizi,&boyut);
    return 0;
}

void bubbleSort(int* const dizi, const size_t* const boyut){
    unsigned int i,j;
    for(i=0;i<*boyut;i++){
        for(j=0;j<*boyut-1;j++){
            if(dizi[j] > dizi[j+1]){
                yer_degistir(&(dizi[j]), &(dizi[j+1]) );
            }
        }
    }
}

void yer_degistir(int* const birinciPtr, int* const ikinciPtr){
    int gecici = *birinciPtr;
    *birinciPtr = *ikinciPtr;
    *ikinciPtr = gecici;
}

void diziyi_yazdir(const int dizi[],const size_t* const boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<*boyut;i++){
        printf("%d ",dizi[i]);
    }
    puts("");
}