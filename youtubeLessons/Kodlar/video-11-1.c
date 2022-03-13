#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// Karakter Fonksiyonları

// isdigit, isalpha, isalnum
// isupper, islower
// isspace, ispunct
// toupper, tolower

int main(){

    char c1 = 'z'; // ASCII 'z' = 122,
    int c1_int = c1; // -> c1_int = 122;

    // isdigit(): girilen char rakamsa 1 değilse 0
    char rakam = '3';
    printf("isdigit('3'):%d\n",isdigit(rakam));

    // isalpha(): girilen char harfse 1 değilse 0
    char harf = 'h';
    printf("isalpha('h'):%d\n",isalpha(harf));

    // isalnum(): girilen char harf veya rakamsa 1 değilse 0
    printf("isalnum('3'):%d\nisalnum('h'):%d\n\n",isalnum(rakam),isalnum(harf));

    // islower(): girilen char küçük harfse 1 değilse 0
    printf("islower('h'):%d\nislower('H'):%d\n",islower(harf),islower('H'));

    // isupper(): girilen char büyük harfse 1 değilse 0
    printf("isupper('h'):%d\nisupper('H'):%d\n\n",isupper(harf),isupper('H'));

    // isspace(): girilen char boşluk, \f, \n, \v, \t, \r ise 1 değilse 0
    printf("isspace(' '):%d\nisspace('h'):%d\n\n",isspace(' '),isspace(harf));

    // ispunct(): girilen char noktalama işareti veya sembolse 1 değilse 0
    printf("ispunct(','):%d\nispunct('&'):%d\nispunct('h'):%d\n\n",ispunct(','), ispunct('&'),ispunct(harf));

    // tolower(): girilen char küçük harfse büyük harfe çevirir
    printf("tolower('H'):%c\n",tolower('H'));

    // toupper(): girilen char büyük harfse küçük harfe çevirir
    printf("toupper('h'):%c\n",toupper(harf));

    return 0;
}