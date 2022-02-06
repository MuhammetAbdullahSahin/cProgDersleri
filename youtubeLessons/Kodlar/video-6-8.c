#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Switch Case + Döngüler

int main(){

	int secenek;
	int sayi1,sayi2;
	printf("Hesap makinesine hoşgeldin!\n");
	printf("Yapmak istediğiniz işlemi seçin\n");
	printf("1. Toplama\n");
	printf("2. Çıkarma\n");
	printf("3. Çarpma\n");
	printf("4. Bölme\n");
	printf("Çıkmak için -1 yazın\n");
	scanf("%d",&secenek);
	while(secenek != -1){
		printf("İşlem yapılacak sayıları girin\n");
		scanf("%d %d",&sayi1,&sayi2);
		switch(secenek){
			case 1:
				printf("İki sayının toplamı %d\n",sayi1+sayi2);
				break;
			case 2:
				printf("İki sayının farkı %d\n",sayi1-sayi2);
				break;
			case 3:
				printf("İki sayının çarpımı %d\n",sayi1*sayi2);
				break;
			case 4:
				printf("İki sayının bölümü %d\n",sayi1/sayi2);
				break;
			default:
				printf("Lütfen geçerli bir işlem seçin\n");
				break;
		}
		printf("-----\n");
		printf("Yapmak istediğiniz işlemi seçin\n");
		printf("1. Toplama\n");
		printf("2. Çıkarma\n");
		printf("3. Çarpma\n");
		printf("4. Bölme\n");
		printf("Çıkmak için -1 yazın\n");
		scanf("%d",&secenek);
	}
	printf("Güle güle!\n");
	return 0;
}