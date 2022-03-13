#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 5
#define SATIR 4
#define SUTUN 5


// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Pointer Aritmetiği - Örnek

void yazdir_1B(const int* dizi, const size_t* const boyut);
void yazdir_2B(const size_t* const satir, const size_t* const sutun, const int dizi[*satir][*sutun]);
int main(){

    srand(time(NULL));
    
    int dizi_1B[BOYUT];
    size_t boyut=BOYUT;


    int* ptr = dizi_1B;
    for(int i = 0; i < boyut; i++){
        dizi_1B[i] = 1 + rand() % 10000;
        //*ptr++ = 1 + rand() % 10000;
        //*(ptr+i) = 1 + rand() % 10000;

    }
    size_t satir = SATIR;
    size_t sutun = SUTUN;
    int dizi_2B[satir][sutun];
    ptr = dizi_2B[0];

    for(int i = 0; i < satir; i++){
        for(int j = 0; j < sutun; j++){
            dizi_2B[i][j] = 1 + rand() % 100;
            //*ptr++ = 1 + rand() % 100;
            //*(ptr+i+j) = 1 + rand() % 100;
        }
    }
   
    yazdir_1B(dizi_1B,&boyut);
    yazdir_2B(&satir,&sutun,dizi_2B);
    return 0;
}

void yazdir_1B(const int* dizi, const size_t* const boyut){
    
    for(int i = 0; i < *boyut; i++){
        printf("%d ",*(dizi+i));
        //printf("%d ", *dizi++);
        //printf("%d ", dizi[i]);
    }
    puts("");
}

void yazdir_2B(const size_t* const satir, const size_t* const sutun, const int dizi[*satir][*sutun]){
    const int *ptr = dizi[0];
    printf("\n\t");
    for(int j=0; j < *sutun; j++){
        printf("%6d",j);
    }
    printf("\n\n");
    for(int i = 0; i < *satir; i++){
        printf("%d\t",i);
        for(int j = 0; j < *sutun; j++){
            //printf("%6d", dizi[i][j]);
            printf("%6d", *ptr++);
            //printf("%6d", *(ptr+j+i));
        }
        puts("");
    }
    puts("");
}