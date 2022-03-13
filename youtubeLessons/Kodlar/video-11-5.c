#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Karakter ve Dizgiler (Strings)
// Standart Girdi/Çıktı Kütüphanesi
// Strandard Input/Output Library
// output

// putchar, puts
// sprintf, sscanf

int main(){
    int ret_val;
    // int putchar(char): girilen karakteri terminale bastırır ve int değerini döndürür
    // hata alırsa EOF döndürür.
    char c = 'U';
    printf("Char:");
    putchar(c); // yeni satır eklemez
    puts("");

    // int puts(const char*): girilen stringi terminale bastırır ve yeni satır koyar
    puts("TestTest");

    // int sprintf(char*, const char* format, ...): printf'ten tek farkı, terminale yazdırmak yerine string'e kaydediyor.
    // kaydedilen karakter sayısını döndürür
    // hata alırsa EOF döndürür.
    // sayı değerlerini string'e çevirmek için de kullanılabilir.
    char string_sprintf[100];
    ret_val = sprintf(string_sprintf, "%d\t%s\t%.2f\n",15,"uzaktanakade",7.785);
    printf("%s\n",string_sprintf);
    printf("Döndürdüğü değer:%d\n", ret_val);

    // int sscanf(char*, const* char format, ...): scanf'ten tek farkı, terminalden girdi almak yerine başka bir stringden alıyor.
    // okunan değişken sayısını döndürür
    // hata alırsa EOF döndürür.
    char girdi[] = "3.14 uzaktanakademi 123 3.34";
    double d,f;
    char* str;
    int n;
    ret_val = sscanf(girdi, "%lf%s%d%lf", &d, str, &n, &f);
    printf("Double:%.2lf\nChar*:%s\nInt:%d\nFloat:%f\n", d,str,n,f);
    printf("Döndürdüğü değer: %d\n",ret_val);


    return 0;
}