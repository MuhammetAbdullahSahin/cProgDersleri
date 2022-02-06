#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <float.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// If else

int main(){
	
	// Kullanıcıdan bir sayı alıp, tahminine göre sonuç vermek istiyoruz

	int aklimdakiSayi = 50;
	int tahmin;
	printf("Bir sayi tahmin ediniz:\n");
	scanf("%d",&tahmin);

	if(tahmin > 50){
		printf("Tahmininiz sayıdan büyük\n"); // eğer 50'den büyükse çalışacak
	}
	else if(tahmin == 50){
		printf("Doğru tahmin ettiniz!\n");   // eğer 50'ye eşitse çalışacak
	}
	else{
		printf("Tahmininiz sayıdan küçük\n"); // eğer 50'den küçükse çalışacak
	}
	
	
	/*
	if(tahmin>50 && tahmin<70){
		printf("Tahmininiz 50 ile 70 arasındadır\n");
	}
	if(tahmin>60 && tahmin<70){
		printf("Tahmininiz 60 ile 70 arasındadır\n");
	}
	if(tahmin>0 && tahmin<100){
		printf("Tahmininiz 0 ile 100 arasındadır\n");
	}
	

	if(tahmin>50 && tahmin<70){
		printf("Tahmininiz 50 ile 70 arasındadır\n");
	}
	else if(tahmin>60 && tahmin<70){
		printf("Tahmininiz 60 ile 70 arasındadır\n");
	}
	else if(tahmin>0 && tahmin<100){
		printf("Tahmininiz 0 ile 100 arasındadır\n");
	}
	*/


	/*
	int sinav_notu;
	printf("Sınav notunuzu giriniz:\n");
	scanf("%d",&sinav_notu);

	if(sinav_notu >= 90){
		puts("A");
	}
	else if(sinav_notu >= 80){
		puts("B");
	}
	else if(sinav_notu >= 70){
		puts("C");
	}
	else if(sinav_notu >= 60){
		puts("D");
	}
	else{
		puts("F");
	}

	if(sinav_notu >= 90){
		puts("A");
	}
	if(sinav_notu >= 80){
		puts("B");
	}
	if(sinav_notu >= 70){
		puts("C");
	}
	if(sinav_notu >= 60){
		puts("D");
	}
	if(sinav_notu < 60){
		puts("F");
	}

	*/


	return 0;
} // main'in sonu