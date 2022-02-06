#include <stdio.h>
#include <math.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// For döngüsü, örnekler

int main(){

	// ilk 100 sayının toplamı

	int i;
	int toplam = 0;
	for(i = 1; i <= 100; i++){
		toplam += i;
	}
	printf("İlk 100 sayının toplamı: %d\n\n",toplam);

	/*
	// Bileşik faiz hesabı
	// a = p(1+r)^n

	int anaPara = 1000;
	double oran = 0.05;
	int yil;
	double sonPara;

	printf("Yil\tPara\n");
	for(yil=1; yil<=15; yil++){
		sonPara = anaPara * pow(1+oran,yil);
		printf("%d\t%.2f\n",yil,sonPara); 
	}
	*/
	
	// Bir sayının asal olup olmadığını kontrol etmek
	int sayi = 1057;
	int k;
	for(k=2; k < sayi; k++){
		printf("Şuan k: %d\n",k);
		if(sayi % k == 0){
			printf("\n%d asal değil\n",sayi);
			break;
		}
	}
	
	return 0;
} 