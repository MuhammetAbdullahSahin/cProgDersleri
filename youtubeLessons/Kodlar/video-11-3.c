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
// getchar()

int main(){

    // int getchar(): terminalden bir karakter okur ve int olarak döndürür
    char c;
    //puts("getchar(): girdi bekliyor...");
    //c = getchar();
    //printf("Girilen char: %c\n",c);
    

    // birden fazla karakter okumanın örnek bir yolu
    char cumle[100];
    int i = 0;
    while(i<99 && ( c = getchar() ) != '\n'){
        cumle[i++] = c;
    }
    cumle[i] = '\0'; // bitirme karakteri
    puts("Girilen cümle:");
    puts(cumle);
    
    return 0;
}