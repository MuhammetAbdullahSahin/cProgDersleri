#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// String içerisinde string arama

// strtok

int main(){

    // char* strtok(char* s, const char* ayrac): s'nin içerisinde ayrac stringini arar
    // bulamazsa NULL döndürür
    // bulursa, s stringini o bölümden itibaren böler
    // sonraki her strtok çağrısında, o kısımdan devam eder.

    char  metin[] = "Virgulle ayirdim,ikinci kisim,ne yazacak,test";
    char* ayrac1 = ",";
    char* ptr;

    ptr = strtok(metin,ayrac1);
    while(ptr != NULL){
        printf("%s\n", ptr);
        ptr = strtok(NULL, ayrac1); // sonraki her NULL ile çağrı o stringi bölmeye devam eder
    }

    char  metin2[] = "kelime1 kelime2 kelime3,kelime4 kelime5";
    char* ayrac2 = " ";
    ptr = strtok(metin2,ayrac2);
    while(ptr != NULL){
        printf("%s\n", ptr);
        ptr = strtok(NULL, ayrac2);
    }
    
    return 0;

}
