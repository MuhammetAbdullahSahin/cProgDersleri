#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyaya Yazma - 3

typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
} Film;


int main(){

    Film film = {1972, "Crime", 152, "The Godfather"};
    Film film2 = {1957, "Crime", 96, "Angry Man"};
    Film film3 = {2010, "SciFi", 148, "Inception"};
    Film film4 = {1999, "Drama", 139, "Fight Club"};
    int film_sayisi = 4;
    Film filmler[4] = {film,film2,film3,film4};

    FILE* dosya;

    dosya = fopen("13-3.txt","w"); // dosyayı YAZMA izni ile açıyoruz.
    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        int i = 0;
        while(!feof(dosya) && i < film_sayisi){
            fprintf(dosya, "%d %s %d %s\n", filmler[i].yil, filmler[i].tur, filmler[i].yil,filmler[i].isim);
            i++;
        }
       
    }
    fclose(dosya); // açtığımız dosyayı kapatıyoruz.
    
    return 0;
}




