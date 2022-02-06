#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <float.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// If

int main(){

	char* isik = "kirmizi"; // yeşil karakterlerine sahip bir "string" oluşturduk

	if(isik == "yeşil"){  // isik stringi "yeşil" mi diye kontrol ediyoruz
		printf("İlerle\n"); // eğer yeşilse buraya girecek
	}
	if(isik == "kirmizi"){ // isik stringi kırmızı mı diye kontrol ediyoruz
		printf("Dur\n");	// eğer kırmızıysa buraya girecek
	}

	int hiz = 30;

	if(hiz > 90){
		printf("Hız limitini aştın, yavaş git!\n");
	}
	if(hiz < 90){
		printf("Hız limitini aşmadın\n");
	}
	
	/*
	if(0){
		printf("İf'in içine 0 yazdım\n");
	}
	if(1){
		printf("İfin içine 1 yazdım\n");
	}
	if(-1){
		printf("İfin içine -1 yazdım\n");
	}

	printf("%d\n",5==5); // 1
	printf("%d\n",5>5);  // 0

	printf("True'nun değeri: %d\n",true);
	printf("False'ın değeri: %d\n",false);
	*/



	// && ||  ve ! kıyaslamaları

	/*
	int anaPara = 100;
	float faiz;
	if(anaPara > 1000 && anaPara < 10000){
		faiz = 3.2;
	}
	else if(anaPara > 500 && anaPara <= 1000){
		faiz = 4.5;
	}
	else{
		faiz = 5;
	}
	*/
	/*
	bool ates, tansiyon, nefes_darligi;
	ates = true;
	tansiyon = false;
	nefes_darligi = false;

	if(ates || tansiyon || nefes_darligi){
		printf("Doktora görün!\n");
	}
	else{
		printf("Sorun yok\n");
	}
	*/

	/*
	bool hasta = false;

	if(!hasta){ // not false yani true demek.
		printf("Hasta değil\n");
	}
	*/

	return 0;
} // main'in sonu