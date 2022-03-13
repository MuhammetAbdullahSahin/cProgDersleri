#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String Kıyaslamaları

// strcmp, strncmp 


int main(){

    // int strcmp(const char* s1, const char* s2): girilen argümanları kıyaslar.
    // Aynılarsa 0 döndürür
    // s1>s2 ise 0'dan büyük bir değer döndürür
    // s1<s2 ise 0'dan küçük bir değer döndürür

    char* s1 = "Uzaktan Akademiye Hoşgeldiniz!";
    char* s2 = "Uzaktan Akademi";
    char* s3 = "Uzaktan Akademiye Hoşgeldiniz!";
    char* s4 = "Uzaktan Akademiye Hoşgeldiniz! 123123";
    printf("s1 = %s\ns2 = %s\ns3 = %s\ns4 = %s\n\n",s1,s2,s3,s4);
    printf("strcmp(s1,s2) = %d\n",strcmp(s1,s2));
    printf("strcmp(s1,s3) = %d\n",strcmp(s1,s3));
    printf("strcmp(s1,s4) = %d\n\n",strcmp(s1,s4));

    // int strncmp(const char* s1, const char* s2, size_t n): girilen argümanların n karakterlerini kıyaslar
    // Aynılarsa 0 döndürür
    // s1>s2 ise 0'dan büyük bir değer döndürür
    // s1<s2 ise 0'dan küçük bir değer döndürür
    printf("strncmp(s1,s2) = %d\n",strncmp(s1,s2,7));
    printf("strncmp(s1,s3) = %d\n",strncmp(s1,s3,15));
    printf("strncmp(s1,s4) = %d\n\n",strncmp(s1,s4,100));

    s1 = "ABC";
    s2 = "abc";
    printf("strcmp(%s,%s) = %d\n\n",s1,s2,strcmp(s1,s2));


    // ASCII Değerleri
    s1 = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    s2 = "abcdefghijklmnopqrstuwxyz";

    for(int i=0;i<strlen(s1);i++){
        printf("%c:%2d\t%c:%2d\n",s1[i],s1[i],s2[i],s2[i]);
    }

    return 0;
}