#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyaya Yazma - 2

typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
} Film;


int main(){

    Film film = {1972, "Crime", 152, "The Godfather"};

    FILE* dosya;

    dosya = fopen("13-2.txt","w"); // dosyayı YAZMA izni ile açıyoruz.
    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        fprintf(dosya, "%d %s %d %s\n", film.yil, film.tur, film.yil,film.isim);
    }
    fclose(dosya); // açtığımız dosyayı kapatıyoruz.
    
    return 0;
}




