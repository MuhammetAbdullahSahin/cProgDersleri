#include <stdio.h>
#include <stddef.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Pointer Pointerları


void isimleri_yazdir(size_t boyut, char* isimler[boyut]);
void notlari_yazdir(size_t boyut, size_t not, int* ogrenciler[boyut]);

int main(){

    char* isim = "Isim1";
    char* isimler[5] = {isim,"Isim2","Isim3","Isim4","Isim5"};
    isimleri_yazdir(5,isimler);

    
    int ogrenci1[3] = {50,40,90};
    int ogrenci2[3] = {40,80,55};
    int ogrenci3[3] = {15,90,80};

    int* ogrenciler[3] = {ogrenci1,ogrenci2,ogrenci3};

    notlari_yazdir(3,3,ogrenciler);

    int** iPtr = ogrenciler;
    puts("");
    for(int i = 0; i<3; i++){
        printf("Ogrenci%d'in notları: ",i+1);
        for (int j = 0; j<3; j++){
            printf("%d ",*(*(iPtr+j)+i)); // ogrenci[j];
        }
        puts("");
    }
    
    return 0;
}

void notlari_yazdir(size_t boyut, size_t not, int* ogrenciler[boyut]){
    int* iPtr = NULL;
    for(int i = 0; i<boyut; i++){
        iPtr = *(ogrenciler+i); // iPtr = ogrenciler[i];
        printf("Ogrenci%d'in notları: ",i+1);
        for(int j = 0; j<not; j++){
            printf("%d ",*(iPtr+j)); // ogrenci[j];
        }
        puts("");
    }
}

void isimleri_yazdir(size_t boyut, char* isimler[boyut]){
    char* cPtr = NULL;
    for(int i = 0; i<boyut; i++){
        cPtr = *(isimler+i);
        //cPtr = isimler[i];
        while(*cPtr != '\0' ){
            printf("%c",*cPtr);
            cPtr++;
        }
        puts("");
    }

    for(int i = 0; i<boyut; i++){
        //printf("%s\n", isimler[i]);
    }
}