#include <stdio.h>


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
	printf("%d ogrencinin ortalamasi %.2f\n",ogrenciSayisi,ortalama);


	return 0;
}