#include <stdio.h>
#include <stddef.h>
#include <ctype.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// İşaretçilere Giriş - En az ayrıcalık ilkesi
// principle of least privilege

// en ayrıcalıklı (hem pointer hem değeri değiştirilebilir)
void buyuk_harfe_cevir(char *stringPtr);

// bir farklı seviyesi (pointer değişebilir ama değerini değiştiremem)
void metni_yazdir(const char * stringPtr); // sağdan sola okunur, işaretçi sabit bir karaktere işaret ediyor
void sayiyi_yazdir(const int* intPtr); // non-const pointer to a const variable

// en az ayrıcalıklı
void yazdir_en_az(const float* const floatPtr);
int main(){

    char test[] = "dEnEmE meTni MerHabA 239 Test";
    buyuk_harfe_cevir(test);
    printf("%s\n",test);

    metni_yazdir(test);

    int var = 16;
    int y = 20;
    int* const ptr = &var;
    *ptr = 23; // yapılabilir çünkü sabit bir pointer, sabit olmayan bir değişkeni gösteriyor.
    ptr = &y;  // yapılamaz çünkü pointer sabit.


    float f = 5.37;
    const float* const floatPtr = &f;
    floatPtr++;
    *floatPtr = 3.4;
    yazdir_en_az(floatPtr);


    // Bir dizi oluştururken, integer gösteren sabit bir pointer oluşturmuş oluruz.
    int dizi[3];
    int* const ptr;

    dizi = dizi+1; // yapılamaz çünkü dizi sabit bir pointerdır.

    return 0;
}

void buyuk_harfe_cevir(char *stringPtr){ // non-const pointer to a non-const variable
    while( *stringPtr != '\0' ){
        *stringPtr = toupper(*stringPtr); // pointerın gösteriği adresteki değeri değiştirebiliyoruz.
        stringPtr++; // pointerın gösterdiği adresi değiştirebiliyoruz.
    }
}

void metni_yazdir(const char* stringPtr){ // non-const pointer to a cont variable
    while( *stringPtr != '\0' ){
        printf("%c", *stringPtr);
        stringPtr++;  // pointerın gösterdiği adresi değiştirebiliyoruz
    }
    char y = 'g';
    *stringPtr = y; // hata verir çünkü pointerın gösteriği adresteki değer const yani değişemez.
}

void yazdir_en_az(const float* const floatPtr){
    printf("Float: %f\n",*floatPtr);
    floatPtr++; // sabit bir pointerın gösterdiği adresi değiştiremem.
    float x = 3.3;
    *floatPtr = x; // pointerın gösterdiği adresteki değişkeni değiştiremem.
}
