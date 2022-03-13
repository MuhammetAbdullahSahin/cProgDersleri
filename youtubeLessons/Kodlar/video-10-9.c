#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

#define BOYUT 1000

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dizilerin boyutlarını bulmak

size_t boyutunu_bul(int dizi[]); // boyutu vermezsek, fonksiyon scope'u içerisinde boyunu bulamayız.
size_t boyutunu_bul_macro(int dizi[]);
size_t boyutunu_bul_ptr(int dizi[]);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    size_t boyut=BOYUT;

    for(int i = 0; i < boyut; i++){
        dizi[i] = 1 + rand() % 10000;
    }

    boyut = sizeof(dizi)/sizeof(dizi[0]);
    printf("%d\n", boyut);

    boyut = boyutunu_bul(dizi);
    printf("%d\n",boyut);

    boyut = LEN(dizi);
    printf("%d\n", boyut);

    boyut = boyutunu_bul_macro(dizi);
    printf("%d\n",boyut);

    boyut = *(&dizi + 1) - dizi; 
    printf("%d\n", boyut);

    boyut = boyutunu_bul_ptr(dizi); 
    printf("%d\n", boyut);

    return 0;
}

size_t boyutunu_bul(int dizi[]){
    return sizeof(dizi)/sizeof(dizi[0]);
}

size_t boyutunu_bul_macro(int dizi[]){
    return LEN(dizi);
}

size_t boyutunu_bul_ptr(int dizi[]){
    return *(&dizi + 1) - dizi; 
}