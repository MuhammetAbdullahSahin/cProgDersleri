#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 100

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyon Pointerları 1

void bubbleSort(int dizi[], const size_t boyut, int (*kiyasla)(const int* const a,const int* const b) );

int artan(const int* const a, const int* const b);
int azalan(const int* const a, const int* const  b);

void diziyi_yazdir(const int dizi[], const size_t boyut);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1 + rand() % 1000;
    }
    printf("Nasıl sıralamak istersiniz?\n");
    printf("1-Artan\n");
    printf("2-Azalan\n");
    int secenek;
    scanf("%d",&secenek);

    if(secenek == 1){
        bubbleSort(dizi,boyut,artan);
    }
    else{
        bubbleSort(dizi,boyut,azalan);
    }

    diziyi_yazdir(dizi,boyut);

    return 0;
}

void bubbleSort(int dizi[], const size_t boyut, int (*kiyasla)(const int* const a,const int* const b) ){
    void yer_degistir(int* const birinciPtr, int* const ikinciPtr); // sadece bubbleSort fonksiyonu kullanacak
    int i,j;
    for(i=1;i<boyut;i++){
        for(j=0;j<boyut-1;j++){
            if((*kiyasla)(&dizi[j],&dizi[j+1])){ // kiyasla pointerının gösterdiği fonksiyona eriştik
                yer_degistir(&(dizi[j]), &(dizi[j+1]));
            }
        }
    }
}

void diziyi_yazdir(const int dizi[],const size_t boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    puts("");
}
void yer_degistir(int* const birinciPtr, int* const ikinciPtr){
    int gecici = *birinciPtr;
    *birinciPtr = *ikinciPtr;
    *ikinciPtr = gecici;
}

int azalan(const int* a, const int* b){
    return *a<*b;
}
int artan(const int* a, const int* b){
    return *b<*a;
}