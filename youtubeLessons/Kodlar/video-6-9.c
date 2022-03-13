#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Break ve Continue

int main(){

    int sayi = 98754341;
    int i;
    /*
    for(i = 2; i<sayi; i++){
        printf("%d'yi kontrol ediyor\n",i);
        if( sayi%i == 0 ){
            printf("Asal değil\n");
            break;
        }
    }
    */

    float sonuc;
    for(i = -100; i<100; i++){
        if(i==0){
            printf("0'a bölünemez.\n");
            continue;
        }
        sonuc = 1.0/i;
        printf("1/%d:\t%f\n",i, sonuc);
    }
}