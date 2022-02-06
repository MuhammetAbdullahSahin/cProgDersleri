#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Dizilere giriş -- tanımlama


int main(){

	int dizi_1[10]; // hafızada 10 integerlık yer ayır.
	int i;
	for(i = 0; i<10; i++){
		printf("dizi_1[%d]= %d\n",i,dizi_1[i]); // içerisine rastgele değerler alıyor.
	}

	puts("");
	int dizi_2[10]; // hafızada 10 integerlık yer tut
	for(i = 0; i < 10; i++){
		dizi_2[i] = 0; // dizideki her elemanı 0'a eşitle.
	}
	for(i = 0; i<10; i++){
		printf("dizi_2[%d]= %d\n",i,dizi_2[i]); // dizideki elamanları yazdır
	}
	
	
	puts("");
	int dizi_3[10] = {10,-1,7,-356,-71,50,12,37,-555,0}; // hafızada 10 integerlık yer tutup bu sayıları içine yaz
	for(i = 0; i<10; i++){
		printf("dizi_3[%d]= %d\n",i,dizi_3[i]);
	}

	// Eğer {} içerisinde dizinin boyutundan daha az eleman varsa, geri kalan elemanları 0'a eşitler.
	puts("");
	int dizi_4[10] = {5,5,8}; // ilk elemanı 0'a eşitler, boyut>girilen sayı miktarı olduğu için geri kalan 9 elemanı da 0'a eşitler.
	for(i = 0; i<10; i++){
		printf("dizi_4[%d]= %d\n",i,dizi_4[i]);
	}

	return 0;

}
