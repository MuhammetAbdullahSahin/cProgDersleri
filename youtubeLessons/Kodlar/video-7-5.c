#include <stdio.h>
#include "headers/video-7-5.h" // tırnak içerisinde dahil ediyoruz.

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyonlara giriş - header dosyaları


int main(){

	int sayi = 10;

	printf("%d\n", karesini_al(sayi));
	printf("%d! = %d\n",sayi,faktoriyel(sayi));
	return 0;
}

