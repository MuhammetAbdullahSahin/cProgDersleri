#include <stdio.h>
#include <stddef.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyon Pointerları 2

double topla(const double, const double);
double cikar(const double, const double);
double carp(const double, const double);
double bol(const double,const double);

void menu_yazdir();

int main(){

    double (*hesapla[4])(const double,const double) = {topla,cikar,carp,bol};

    size_t secenek;

    menu_yazdir();
    scanf("%u", &secenek);
    while(secenek != -1 && secenek >= 1 && secenek <= 4){
        double n1,n2,sonuc;
        printf("Sayıları giriniz:");
        scanf("%lf %lf", &n1, &n2);
        sonuc = (*hesapla[secenek-1])(n1,n2); // => hesapla[secenek-1](n1,n2); ile aynı şey
        printf("Sonuç: %3.2lf\n",sonuc);
        menu_yazdir();
        scanf("%u", &secenek);
    }
    printf("Güle güle!\n");
    
    return 0;
}

void menu_yazdir(){
    printf("\nYapmak istediğiniz işlemi seçin\n");
	printf("1. Toplama\n");
	printf("2. Çıkarma\n");
	printf("3. Çarpma\n");
	printf("4. Bölme\t\t(Çıkmak için -1 yazın)\n");
}

double topla(const double n1, const double n2){
    return n1+n2;
}
double cikar(const double n1 , const double n2){
    return n1-n2;
}
double carp(const double n1, const double n2){
    return n1*n2;
}
double bol(const double n1,const double n2){
    return n1/n2;
}