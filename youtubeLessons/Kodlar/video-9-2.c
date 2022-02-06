#include <stdio.h>
#include <stddef.h>
#include "headers/video-7-5.h" // faktoriyel fonksiyonunu alalım

#define BOYUT 15 // dizimizin boyutu 15 elemanlı olacak, tamamı büyük harf

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Dizilere giriş -- tanımlama


int main(){

	int dizi[BOYUT]; // hafızada BOYUT=10 integerlık yer ayır.
	int i;
	// unsigned int i;
	// size_t i;

	for(i = 0; i<BOYUT; i++){
		dizi[i] = faktoriyel(i); // her bir elemanı, bulunduğu konumun faktöriyeline eşitle
	}

	printf("Eleman\tDeğeri\n");
	for(i = 0; i<BOYUT; i++){
		printf("[%d]\t%d\n",i,dizi[i]);
	}
	
	//dizi[300] = 5; //dizinin tanımlı olmadığı yerlere erişmeye çalışırsak segmentation fault alırız
	return 0;

}
