#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String Manipülasyonları

// strcat, strncat 


int main(){

    // char* strcat(char* s1, const char* s2): s2'nin içeriğini s1'in sonuna ekler.
    // s1'in sonundaki '\0'ı kaldırıp birleştirilmiş stringin sonuna ekler.
    // s1'i döndürür
    char str1[100] = "Uzaktan";
    char* str2 = " Akademi";
    strcat(str1,str2);
    printf("strcpy\tStr1: ");
    puts(str1);

    // char* strncat(char* s1, const char* s2, size_t n): s2'nin içerdiği karakterlerin n tanesini s1'e ekler
    // s1'in sonundaki '\0'ı kaldırıp birleştirilmiş stringin sonuna ekler.
    // s1'i döndürür

    char str3[50] = "Uzaktan";
    strncat(str3,str2,5);
    printf("strncpy\tStr3: ");
    puts(str3);

    return 0;
}