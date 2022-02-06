#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// While flag


int main(){

	int sayac = 0;
	int not;
	int toplamNot = 0;

	printf("Not'u giriniz, çıkmak için -1 yazın\n");
	scanf("%d",&not);

	while(not != -1){
		toplamNot = toplamNot + not;
		sayac = sayac + 1;
		printf("Not'u giriniz, çıkmak için -1 yazın\n");
		scanf("%d",&not);
	}
	
	float ortalama = toplamNot / sayac;
	printf("%d öğrencinin ortalaması %.2f\n",sayac,ortalama); // %.2f virgülden sonra 2 basamak yazdırmak için

	return 0;
}