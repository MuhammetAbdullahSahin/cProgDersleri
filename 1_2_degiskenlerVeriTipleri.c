#include <stdio.h>

int main()
{

    int a;
    int b;

    printf("Bir a ve bir b tam sayısı giriniz:");
    scanf("%d %d", &a,&b); // & operatörü burda kullanıcıdan girdi almaya yarar
    printf("Girdiğiniz sayılar: %d ve %d", a, b);

    return 0;
}