#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define BOYUT 10

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dizilerde ARAMA 

bool bul(const int dizi[], size_t boyut, int deger); 

void diziyi_yazdir(const int dizi[], size_t boyut);

int main(){

    srand(time(NULL));
    
    int dizi[BOYUT];
    int i = 0;
    size_t boyut=BOYUT;

    for(; i < boyut; i++){
        dizi[i] = 1+rand()%100;
    }
    diziyi_yazdir(dizi,boyut);

    printf("Aradığınız sayıyı girin:");
    int sayi;
    scanf("%d",&sayi);

    bool var_mi = bul(dizi,boyut,sayi);
    if(var_mi == true){
        printf("Aradığınız sayı dizide mevcut\n");
    }
    else{
        printf("Aradığınız sayıyı bulamadık\n");
    }
    
	return 0;

}

bool bul(const int dizi[], size_t boyut, int deger){
    size_t i = 0;
    for(; i<boyut; i++){
        if(dizi[i] == deger){
            return true;
        }
    }
    return false;
}

void diziyi_yazdir(const int dizi[],size_t boyut){
    size_t i ;
    puts("Dizinin içeriği:");
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    puts("");
}

