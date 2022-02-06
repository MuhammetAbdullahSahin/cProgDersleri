#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyonlara giriş 


int karesini_al(int x);
int bes_ekle(int x);

int main(){

	int sayi = 10;
	printf("%d\n", bes_ekle(sayi)); // sayıya 5 ekle

	printf("%d\n", karesini_al(sayi)); // sayının karesini al

	return 0;
}

int karesini_al(int x){
	x *= x;
	return x;
}

int bes_ekle(int x){
	x += 5;
	return x;
}
