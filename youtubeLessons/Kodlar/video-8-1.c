#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Recursion - Faktoriyel

long faktoriyel_dongu(int x){
	long faktoriyel = 1;
	for ( ; x>0  ; faktoriyel *= x--);
	return faktoriyel;
}

long faktoriyel_ozyinelemeli(int x){
	if(x <= 1){ // 0! ve 1! durumları için
		return 1;
	}
	return x*faktoriyel_ozyinelemeli(x-1);
}

int main(){

	int sayi;
	for(sayi = 0; sayi<20;sayi++)
		printf("%d! = %li\n",sayi,faktoriyel_ozyinelemeli(sayi));

	return 0;
}
