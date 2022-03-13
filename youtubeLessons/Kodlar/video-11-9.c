#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String içerisinde karakter arama

// strchr, strrchr

int main(){

    // char* strchr(const char* s, char c): c karakterinin s stringi içinde bulunduğu İLK konumu bulmaya çalışır.
    // bulursa, o konuma işaret eden bir pointer döndürülür.
    // bulamazsa NULL döndürülür.

    char* s = "Uzaktan Akademi";
    char c1 = 'z';
    char c2 = 'j';
    char* ret_val;
    if(  (ret_val = strchr(s,c1)) != NULL){
        printf("%s'nin içinde %c karakteri bulunuyor.\n",s,c1);
        printf("Döndürdüğü: ");
        puts(ret_val);
    }
    else{
        printf("%s'nin içinde %c karakteri bulunmuyor.\n\n",s,c1);
    }
    if(  (ret_val = strchr(s,c2)) != NULL){
        printf("%s'nin içinde %c karakteri bulunuyor.\n",s,c2);
        printf("Döndürdüğü: ");
        puts(ret_val);
    }
    else{
        printf("%s'nin içinde %c karakteri bulunmuyor.\n\n",s,c2);
    }   


    // char* strrchr(const char* s, char c): c karakterinin s stringi içinde bulunduğu SON konumu bulmaya çalışır.
    // bulursa, o konuma işaret eden bir pointer döndürülür.
    // bulamazsa NULL döndürülür.

    c1 = 'a';
    if(  (ret_val = strrchr(s,c1)) != NULL){
        printf("%s'nin içinde %c karakteri bulunuyor.\n",s,c1);
        printf("Döndürdüğü: ");
        puts(ret_val);
    }
    else{
        printf("%s'nin içinde %c karakteri bulunmuyor.\n",s,c1);
    }
    return 0;
}