#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Recursion - Fibonacci


long fibonacci(int x){
	if(x<0){
		return -1; // hata olduğunu anlamak için
	}
	if(x == 1 || x == 0){ // önce x == 1, sonra x == 0 
		return 1;
	}
	return fibonacci(x-1) + fibonacci(x-2);	
}

int main(){

	int sayi;
	for(sayi = 0; sayi<990;sayi++)
		printf("fib(%d)\t\t%5li\n",sayi,fibonacci(sayi));

	return 0;
}
