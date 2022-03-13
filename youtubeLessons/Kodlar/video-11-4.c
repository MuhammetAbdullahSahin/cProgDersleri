#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// Standart Girdi/Çıktı Kütüphanesi
// Strandard Input/Output Library
// input
// fgets()

int main(){

    // char* fgets(char* s, int n, FILE *stream): streamden(dosya, klavye vs.) n kadar karakter okur ve s'e yazar
    char string[10];
    puts("fgets() 10 karakter girdi bekliyor...");
    fgets(string, 10, stdin); // stdin klavyeden input alacağız anlamına geliyor.
    printf("Girilen string: %s\n",string);

    
    return 0;
}