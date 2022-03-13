#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyaya Yazma - 1

int main(){

    char* satir = "Uzaktan Akademi'ye Hoşgeldiniz!";

    FILE* dosya;

    dosya = fopen("13-1.txt","w"); // dosyayı YAZMA izni ile açıyoruz.
    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        fprintf(dosya, "%s\n", satir);
    }
    fclose(dosya); // açtığımız dosyayı kapatıyoruz.
    
    return 0;
}




