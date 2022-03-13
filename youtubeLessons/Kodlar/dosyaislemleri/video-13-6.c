#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyanın sonuna EKLEMEK

typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
} Film;

void dosyayi_oku();

int main(){

    FILE* dosya;
    dosya = fopen("D:\\Uzaktan Akademi\\dersler\\c-giris\\codes\\dosyaislemleri\\13-5.txt","a"); // dosyayı APPEND izni ile açıyoruz.
    
    Film film ={2001,"Adventure", 201, "The Lord of The Rings: The Fellowship of The Ring"};
    
    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        fprintf(dosya, "%d %s %d %s\n", film.yil, film.tur, film.yil,film.isim);

    }
    fclose(dosya);

    dosyayi_oku();
    
    return 0;
}

void dosyayi_oku(){
    FILE* dosya;
    char* satir;
    dosya = fopen("D:\\Uzaktan Akademi\\dersler\\c-giris\\codes\\dosyaislemleri\\13-5.txt","r");
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
   
}



