#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// While giriş


int main(){

	int hiz = 0;
	int ivme = 5;

	while(hiz<50){
		hiz = hiz+ivme;
		printf("Hiz: %d\n",hiz);
	}

	/*
	if(hiz<50){
		hiz = hiz+ivme;
		printf("Hiz: %d\n",hiz);
		// 20. satıra geri dön

	}
	else{
		// döngüden çık
	}
	*/


}