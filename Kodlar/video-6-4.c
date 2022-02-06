#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// While flag


int main(){

	int hiz = 0;
	int ivme = 5;

	do{
		hiz = hiz + ivme;
		printf("Hız: %d\n",hiz);
	}
	while(hiz < 50);
	
	return 0;
}