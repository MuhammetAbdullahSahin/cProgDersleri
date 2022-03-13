#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Terminal İşlemleri - 2

int main(int argc, char** argv){

    char* dosyaIsmi = argv[1];

    FILE* dosya = fopen(dosyaIsmi,"r");
    if(dosya == NULL){
        printf("Dosya acilamadi.\n");
        exit(-1);
    }
    printf("%s dosyasi acildi\n\n",dosyaIsmi);
    char satir[100];
    while(!feof(dosya)){
        if(fgets(satir,100,dosya)){
            printf("%s",satir);
        }
    }
    fclose(dosya);
    return 0;
}