#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyonlara giriş

int karesini_al(int x); // fonksiyon prototipi

int main(){

	int sayi = 10;

	printf("%d\n", karesini_al(sayi));
	return 0;
}

int karesini_al(int x){ // fonksiyonun kendisi
	x *= x; 
	return x;
}
