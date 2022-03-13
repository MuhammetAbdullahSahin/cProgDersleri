#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String içerisinde string arama

// strcspn, strspn
// strpbrk, strstr

int main(){

    // size_t strcspn(const char* s1, const char* s2): 
    // s1'in içerisinde, s2'deki herhangi bir karakter bulunduğu yere kadar olan kısmın boyunu döndürür
    
    char* s1 = "Uzaktan Akademi 123 123 Uzaktan";
    char* s2 = "0123456789";
    int ret_val;
    printf("\ns1 = %s\ns2 = %s\n",s1,s2);
    ret_val = strcspn(s1,s2);
    printf("strcspn(s1,s2) = %d\n",ret_val); // s1'in içinde sayı bulana kadar olan kısım


    // size_t strspn(const char* s1, const char* s2):
    // s1'in içerisinde sadece s2'deki karakterleri içeren İLK kısmın boyunu döndürür

    s1 = "578 875 4477";
    s2 = "1234567890";
    ret_val = strspn(s1,s2);
    printf("\ns1 = %s\ns2 = %s\n",s1,s2);
    printf("strspn(s1,s2) = %d\n",ret_val); // s1'in içinde, sayıdan başka bir şey görene kadarki kısım


    // char* strpbrk(const char* s1, const char* s2): s1'in içinde s2'den herhangi bir karakter bulana kadar gider
    // bulduğu yere pointer döndürür
    // bulamazsa NULL döndürür

    s1 = "Uzaktan Akademi 123 123 Uzaktan";
    s2 = "0123456789";
    char* ret_val_char = strpbrk(s1,s2);
    printf("\ns1 = %s\ns2 = %s\n",s1,s2);
    printf("strpbrk(s1,s2) = %s\n",ret_val_char);


    // char* strstr(const char* s1, const char* s2): s1'in içinde s2'nin bulunduğu ilk kısma pointer döndürür
    // bulamazsa null döndürür
    // s1'in içinde s2 var mı kontrollerinde kullanılabilir.

    s2 = "123 ";
    ret_val_char = strstr(s1,s2);
    printf("\ns1 = %s\ns2 = %s\n",s1,s2);
    printf("strstr(s1,s2) = %s\n",ret_val_char);

    // bul ve değiştir (find and replace)
    char metin[] = "Merhabalar, gorunuse gore biradaki bazi cumleleri degistirmek gerekiyor. binu nasil yapariz?.";
    char* find = "bi";
    char* replace = "bu";
    char* ptr = metin;
    puts(metin);
    while( (ptr = strstr(metin,find)) != NULL ){
        strncpy(ptr, replace,2);
    }
    puts(metin);

    return 0;

}
