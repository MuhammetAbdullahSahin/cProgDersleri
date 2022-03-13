#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyadan Okumak - 1

int main(){

    FILE* dosya;
    dosya = fopen("D:\\Uzaktan Akademi\\dersler\\c-giris\\codes\\dosyaislemleri\\13-4.txt","r"); // dosyayı OKUMA izni ile açıyoruz.
    char* satir;

    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        while(!feof(dosya)){
            if (fgets(satir, 100, dosya)) {
                printf("%s",satir);
            }
        }
    }
    fclose(dosya); // açtığımız dosyayı kapatıyoruz.
    return 0;
}




