#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <float.h>

int main()
{

    int hiz = 30;

    if(hiz > 90)
    {
        printf("Hiz limitini astiniz\n");
    }
    else  
    {
        printf("Hiz limitini asmadiniz\n"); 
    }

    int aklimdakiSayi = 50;
    int tahmin;
    printf("Bir sayi tahmin et: ");
    scanf("%d", &tahmin);

    if (tahmin > 50)
    {
        printf("Tahmininiz sayidan buyuk\n");
    }
    else if (tahmin == 50)
    {
        printf("Dogru tahmin\n");
    }
    else
    {
        printf("Tahminiz sayidan kucuk\n");
    }

    int sinav_notu;
    printf("Sinav notunuzu giriniz: ");
    scanf("%d", &sinav_notu);

    if (sinav_notu >= 90)
    {
        puts("A"); // puts sadece string karakterler yazdırır | \n & %d gibi karakterleri okumaz
    }
    else if (sinav_notu >= 80)
    {
        puts("B");
    }
    else if (sinav_notu >= 70)
    {
        puts("C");
    }
    else if (sinav_notu >= 60)
    {
        puts("D");
    }
    else
    {
        puts("E");
    }
    
    return 0;

}