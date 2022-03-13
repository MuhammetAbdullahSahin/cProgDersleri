#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Struct
// typedef


/*
struct film{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
};
typedef struct film Film;
*/

typedef int TAMSAYI;

typedef struct{
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
} Film;


int main(){
    TAMSAYI sayi1 = 15;
    printf("%d\n",sayi1);

    Film film1; // değişken tanımlama
    film1.yil = 1994; // struct elemanına . ile erişebiliriz.
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "The Shawshank Redemption";
    printf("%s:\n%4d%4d Dakika %s\n",film1.isim,film1.yil,film1.sure,film1.tur);
    
    Film film2 = {1972, "Crime", 152, "The Godfather"}; // başlangıç değeri atama
    printf("%s:\n%4d%4d Dakika %s\n",film2.isim,film2.yil,film2.sure,film2.tur);

    Film film3 = {2008, "Action"}; // eğer daha az başlangıç değeri verirsem (0 veya NULL)
    printf("%s:\n%4d%4d Dakika %s\n",film3.isim,film3.yil,film3.sure,film3.tur);

    Film* film4;
    film4 = (Film*) malloc(sizeof(Film)); // structa yer ayırıyoruz.
    (*film4).tur = "Crime";
    (*film4).isim = "Pulp Fiction";
    (*film4).yil = 1994;
    (*film4).sure = 154;
    printf("%s:\n%4d%4d Dakika %s\n",film4->isim,film4->yil,film4->sure,film4->tur);

    return 0;
}




