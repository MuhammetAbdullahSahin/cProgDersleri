#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String Manipülasyonları

// strlen
// strcpy, strncpy

int main(){

    // size_t strlen(const char* s): verilen stringin uzunluğunu döndürür ('\0' karakterini saymadan).
    char* s = "Uzaktan Akademi";
    printf("strlen(s) = %d\n",strlen(s));

    // char* strcpy(char* s1, const char* s2): s2'nin içeriğini s1'e kopyalar
    // sonuna '\0' ekler.
    // s1'i döndürür
    char str1[16];
    char str2[] = "Uzaktan Akademi";
    char* ret_val;
    ret_val = strcpy(str1,str2);
    printf("Str1: ");
    puts(str1);
    printf("Döndürdüğü: ");
    puts(ret_val);


    // char* strncpy(char* s1, const char* s2, size_t n): s2'nin içeriğinin n karakterini s1'e kopyalar.
    // sonuna '\0' eklemez. (eğer n, ikinci argümanın tamamını kapsamıyorsa)
    // s1'i döndürür
    char str3[16];
    int n = 8;
    ret_val = strncpy(str3,str2,n);
    str3[n] = '\0';
    printf("Str3: ");
    puts(str3);
    printf("Döndürdüğü: ");
    puts(ret_val);

    return 0;
}