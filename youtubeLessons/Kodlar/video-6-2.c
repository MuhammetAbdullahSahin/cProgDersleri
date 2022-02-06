#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// While sayaç


int main(){

	int sayac = 0;
	int ogrenciSayisi = 10;
	int not;
	int toplamNot = 0;

	while(sayac < ogrenciSayisi){
		scanf("%d",&not);
		toplamNot= toplamNot + not;
		sayac = sayac + 1;
	}

	float ortalama = toplamNot / ogrenciSayisi;
	printf("%d öğrencinin ortalaması %.2f\n",ogrenciSayisi,ortalama);


	return 0;
}