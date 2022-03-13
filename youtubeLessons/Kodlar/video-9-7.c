#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 1000

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dizilerde SIRALAMA (sorting)

void bubbleSort(int dizi[], size_t boyut); 
void diziyi_yazdir(const int dizi[], size_t boyut);
void sure_tut(int dizi[], size_t boyut);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1+rand()%10000;
    }
    diziyi_yazdir(dizi,boyut);
    
    bubbleSort(dizi,boyut);
    diziyi_yazdir(dizi,boyut);
    
    //sure_tut(dizi,boyut);
	return 0;

}

void diziyi_yazdir(const int dizi[],size_t boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    puts("");
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

void sure_tut(int dizi[], size_t boyut){
    clock_t sayac;
    double sure;
    sayac = clock();
    bubbleSort(dizi,boyut);
    sayac = clock() - sayac;
    sure = ((double)sayac) / CLOCKS_PER_SEC;
    printf("Sıralaması toplamda %f saniye sürdü\n",sure);
}