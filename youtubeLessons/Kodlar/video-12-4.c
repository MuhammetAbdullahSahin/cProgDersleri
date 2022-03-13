#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Enum

enum ay {
    OCAK=1,SUB,MAR,NIS,MAY,HAZ,TEM,AGU,EYL,EKI,KAS,ARA
};
typedef enum ay Ay;
// OCAK = 0;
// SUB = 1;
// MAR = 2;...


typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
    Ay ay;
} Film;

void film_yazdir(Film); // Pass by value
void film_yazdir_ptr(Film*); // Pass by reference

int main(){

    Film film1; // değişken tanımlama
    film1.yil = 1994; // struct elemanına . ile erişebiliriz.
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "The Shawshank Redemption";
    film1.ay = OCAK;

    Film film2 = {1972, "Crime", 152, "The Godfather",MAY}; // başlangıç değeri atama
    Film film3 = {2008, "Action"}; // eğer daha az başlangıç değeri verirsem (0 veya NULL)
    
    Film* film4;
    film4 = (Film*) malloc(sizeof(Film)); // structa yer ayırıyoruz.
    (*film4).tur = "Crime";
    (*film4).isim = "Pulp Fiction";
    (*film4).yil = 1994;
    (*film4).sure = 154;
    (*film4).ay = ARA;


    printf("Film1 hafızadaki adresi: %p\n",&film1);
    film_yazdir(film1);

    printf("Film2 hafızadaki adresi: %p\n",&film1);
    film_yazdir(film2);
    
    printf("Film3 hafızadaki adresi: %p\n",&film4);
    film_yazdir(film3);

    printf("Film4 hafızadaki adresi: %p\n",&(*film4));
    film_yazdir_ptr(film4);


    return 0;
}


void film_yazdir(Film film){
    printf("Filmin hafızada adresi: %p\n", &film);
    printf("%s:\n(%d-%4d)%4d Dakika %s\n\n",film.isim,film.ay,film.yil,film.sure,film.tur);
}
void film_yazdir_ptr(Film* film){
    printf("Filmin hafızada adresi: %p\n", &(*film));
    printf("%s:\n(%d-%4d)%4d Dakika %s\n\n",film->isim,film->ay,film->yil,film->sure,film->tur);
}