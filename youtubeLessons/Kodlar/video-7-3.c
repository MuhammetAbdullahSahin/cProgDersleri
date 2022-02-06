#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Fonksiyonlara giriş - Pass by value, pass by reference

/*
// Pass by Value
int karesini_al(int x){
	x *= x;
	return x;
}

int bes_ekle(int x){
	x+=5;
	return x;
}
*/


// Pass by Reference
int karesini_al(int *x){
	(*x) *= (*x);
	return *x;
}

int bes_ekle(int *x){
	(*x)+=5;
	return *x;
}



int main(){

	int sayi = 10;

	/*
	printf("%d\n", bes_ekle(sayi)); // sayıya 5 ekle
	printf("%d\n", karesini_al(sayi)); // sayının karesini al
	*/

	printf("%d\n", bes_ekle(&sayi)); // sayıya 5 ekle
	printf("%d\n", karesini_al(&sayi)); // sayının karesini al
	
	return 0;
}

