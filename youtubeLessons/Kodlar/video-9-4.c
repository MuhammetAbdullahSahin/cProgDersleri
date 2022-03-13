#include <stdio.h>
#include <stddef.h>
#include <string.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter Dizileri

int main(){

    char string1[] = "Göktuğ Başaran";
    char* string2 = "Göktuğ Başaran";

    char string3[] = "string";
    // char string3[] = "{'s', 't', 'r', 'i', 'n', 'g', '\0'}"

    printf("%c\n", string3[0]);
    printf("%c\n", string3[1]);
    printf("%c\n", string3[2]);
    printf("%c\n", string3[3]);
    printf("%c\n", string3[4]);
    printf("%c\n", string3[5]);
    printf("%c\n", string3[6]); // \0 karakteri

    /*
    char string4[10]; // 9 karakter + \0 karakteri
    scanf("%9s", string4); // kullanıcıdan 9 karakter al
    printf("%s\n", string4);
    */

	return 0;

}
