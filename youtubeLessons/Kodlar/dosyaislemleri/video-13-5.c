#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dosya Operasyonları
// Dosyadan Okumak - 2

int main(){

    FILE* dosya;
    dosya = fopen("D:\\Uzaktan Akademi\\dersler\\c-giris\\codes\\dosyaislemleri\\13-5.txt","r"); // dosyayı OKUMA izni ile açıyoruz.

    int sure,yil;
    char tur[20];
    char isim[100];
    
    char* satir;

    if(dosya == NULL){
        puts("Dosya açılamadı");
    }
    else{
        printf("%-10s%-13s%-13s%-s\n","Yıl","Tür", "Süre", "İsim");
        printf("-------------------------------------------------\n");

        while(!feof(dosya)){
            if (fgets(satir, 100, dosya)) {
                sscanf(satir,"%d %s %d %[^\n]s", &yil, tur, &sure, isim);
                printf("%-9d%-12s%-12d%-s\n",yil,tur,sure,isim);
                }
        }
    }
    fclose(dosya); // açtığımız dosyayı kapatıyoruz.
    
    return 0;
}




