#include <stdio.h>

// While flag


int main(){

	int sayac = 0;
	int not;
	int toplamNot = 0;

	printf("Not'u giriniz, cikmak icin -1 yazin\n");
	scanf("%d",&not);

	while(not != -1){
		toplamNot = toplamNot + not;
		sayac = sayac + 1;
		printf("Not'u giriniz, cikmak icin -1 yazin\n");
		scanf("%d",&not);
	}
	
	float ortalama = toplamNot / sayac;
	printf("%d ogrencinin ortalamasi %.2f\n",sayac,ortalama); // %.2f virgülden sonra 2 basamak yazdırmak için

	return 0;
}