#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <float.h>

int main()
{

    char* isik = "kirmizi";

    if(isik == "yesil")
    {
        printf("Ilerleyin\n");
    }
    if (isik == "kirmizi")
    {
        printf("Durun\n");
    }
    
    int hiz = 30;

    if(hiz > 90)
    {
        printf("Hiz limitini astiniz\n");
    }
    if(hiz < 90)
    {
        printf("Hiz limitini asmadiniz\n"); 
    }

    printf("\n");

    if(0)
    {
        printf("if in icine 0 verdim\n");
    }

    if (1)
    {
        printf("if in icine 1 verdim\n");

    }
    
    if(-1)
    {
        printf("if in icine -1 verdim\n");
    }

    printf("\n");

    printf("%d\n", 5 == 5); // => 1 (true)
    printf("%d\n", 5 > 5); // => 0 (false)

    printf("\n");

    printf("True'nun degeri: %d,\n", true);
    printf("False'un degeri: %d,\n", false);

    printf("\n");

    int anaPara = 100;
    float faiz;
    if(anaPara > 1000 && anaPara < 10000)
    {
        faiz = 3.2;
    }
    else if(anaPara > 500 && anaPara <= 1000)
    {
        faiz = 4.5;
    }
    else
    {
        faiz = 5;
    }

    printf("Faiz tutari: %.2f\n", faiz);

    printf("\n");

    bool ates, tansion, nefes_derinligi;
    ates = true;
    tansion = false;
    nefes_derinligi = false;

    if(ates || tansion || nefes_derinligi)
    {
        printf("Doktora gorun\n");
    }
    else
    {
        printf("Sorun yok\n");
    }
    

    printf("\n");

    bool hasta = false;

    if(!hasta)
    {
        printf("Hasta degilsin\n");
    }
    


    return 0;

}