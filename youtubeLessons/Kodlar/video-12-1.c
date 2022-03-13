#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Struct
// Giriş


struct film{ // film adında bir yapı oluşturduk
    unsigned int yil;
    char* tur;
    unsigned int sure;
    char* isim;
};


int main(){
    struct film film1; // değişken tanımlama
    film1.yil = 1994; // struct elemanına . ile erişebiliriz.
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "The Shawshank Redemption";
    printf("%s:\n%4d%4d Dakika %s\n",film1.isim,film1.yil,film1.sure,film1.tur);
    
    printf("%d\n",sizeof(film1));

    
    struct film film2 = {1972, "Crime", 152, "The Godfather"}; // başlangıç değeri atama
    printf("%s:\n%4d%4d Dakika %s\n",film2.isim,film2.yil,film2.sure,film2.tur);

    struct film film3 = {2008, "Action"}; // eğer daha az başlangıç değeri verirsem (0 veya NULL)
    printf("%s:\n%4d%4d Dakika %s\n",film3.isim,film3.yil,film3.sure,film3.tur);
    
    struct film* film4;
    film4 = (struct film*) malloc(sizeof(struct film)); // structa yer ayırıyoruz.
    (*film4).tur = "Crime";
    (*film4).isim = "Pulp Fiction";
    (*film4).yil = 1994;
    (*film4).sure = 154;
    printf("%s:\n%4d%4d Dakika %s\n",film4->isim,film4->yil,film4->sure,film4->tur);
    


    return 0;
}




