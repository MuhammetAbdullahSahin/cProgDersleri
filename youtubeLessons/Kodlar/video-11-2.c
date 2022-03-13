#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String Fonksiyonları

// strtod, strtol, strtoul

int main(){

    // double strtod(const char*, char**): girilen stringin içindeki sayıyı double'a çevirmeye çalışır
    // stringin başındaki boşlukları önemsemez,
    // başaramazsa 0 döndürür,
    // başarırsa, char** artık çevrilen kısmın hemen sonrasına işaret eder
    const char string[] = "  548.777541TestTest";
    char *ptr;
    double sayi;
    sayi = strtod(string, &ptr);
    printf("Sayı: %f\nPtr:%s\n",sayi,ptr);


    // long strtol(const char*, char**, int taban): girilen stringin içindeki sayıyı long'a çevirmeye çalışır
    // başaramazsa 0 döndürür
    // eğer taban değeri 0 girilirse, sayı tabanı otomatik algılanır
    // 2 girilirse, string 2 tabanında yazılmış anlamına gelir
    // 16 girildiyse string 16 tabanında yazılmış anlamına gelir
    // başarırsa, char** artık çevrilen kısmın hemen sonrasına işaret eder
    const char longString[] = "87415 47c84a -101010101 0x740FDA";
    long l1,l2,l3,l4;
    l1 = strtol(longString, &ptr, 10); // 10 tabanında bir sayı
    l2 = strtol(ptr, &ptr, 16); // 16 tabanında bir sayı
    l3 = strtol(ptr, &ptr, 2); // 2 tabanında bir sayı
    l4 = strtol(ptr, &ptr, 0); // otomatik algılar
    printf("l1:%li\nl2:%li\nl3:%li\nl4:%li\n",l1,l2,l3,l4);


    // unsigned long strtoul(const char*, char**, int taban): girilen stringin içindeki sayıyı unsigned long'a çevirir
    // strtol ile aynı mantıkta çalışır
    const char ulongString[] = "124512454";
    l1 = strtoul(ulongString, &ptr, 0);
    printf("l1:%lu\n",l1);

    return 0;
}