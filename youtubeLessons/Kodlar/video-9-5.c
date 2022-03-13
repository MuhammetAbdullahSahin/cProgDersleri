#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Statik diziler

void statik_dizi();
void normal_dizi();

int faktoriyel(int x);
int main(){

    statik_dizi();
    statik_dizi();

    normal_dizi();
    normal_dizi();

	return 0;

}
int faktoriyel(int x){
    int sonuc = 1;
    for(;x>1; x--){
        sonuc*=x;
    }
    return sonuc;
}
void statik_dizi(){
    static int dizi_1[5] = {0};
    int i;

    puts("STATİK DİZİ-> Başlangıç");
    for(i=0;i<5;i++){
        printf("dizi[%d]:%d\t",i,dizi_1[i]); // dizinin içerdiği değerleri yazdırıyoruz.
    }
    puts("");

    puts("STATİK DİZİ-> Çıkış");
    for(i=0;i<5;i++){
        dizi_1[i] += faktoriyel(i)*3; // dizinin içerdiği sayıları değiştirelim.
        printf("dizi[%d]:%d\t",i,dizi_1[i]); // dizinin içerdiği değerleri yazdırıyoruz.
    }
    puts("");
    puts("");

}

void normal_dizi(){
    int dizi_2[5] = {0};
    int i;

    puts("NORMAL DİZİ-> Başlangıç");
    for(i=0;i<5;i++){
        printf("dizi[%d]:%d\t",i,dizi_2[i]); // dizinin içerdiği değerleri yazdırıyoruz.
    }
    puts("");

    puts("NORMAL DİZİ-> Çıkış");
    for(i=0;i<5;i++){
        dizi_2[i] += faktoriyel(i)*3; // dizinin içerdiği sayıları değiştirelim.
        printf("dizi[%d]:%d\t",i,dizi_2[i]); // dizinin içerdiği değerleri yazdırıyoruz.
    }
    puts("");
    puts("");

}