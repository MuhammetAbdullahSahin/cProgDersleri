#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Kullanıcıdan girdi almak

int main(){

	int x; // x adında bir TAMSAYI değişken oluşturduk
	int y; // y adında bir TAMSAYI değişken oluşturduk


	scanf("%d",&x); // x değişkeninin bulunduğu adrese, kullanıcın girdiği değeri yaz
	printf("Girdiğiniz ilk sayı: %d\n",x);

	scanf("%d",&y); // y değişkeninin bulunduğu adrese, kullanıcının girdiği değeri yaz
	printf("Girdiğininiz ikinci sayı: %d\n",y);

	//scanf("%d %d",&x,&y); iki değişkene de aynı anda değer atayabiliriz.
	//printf("Girdiğiniz ilk sayı: %d\nGirdiğiniz ikinci sayı: %d\nBu sayıların toplamı: %d\n",x,y,x+y);
	//printf("Bu sayıların farkı: %d\n",x-y);
	//printf("Bu sayıların çarpımı: %d\n",x*y);
	//printf("Bu sayıların bölümü: %d\n",x/y);
	//printf("Bu sayıların bölümden kalanı(modu): %d\n",x%y);

	//int islem = 10 + 2 * (6/3) + (7-2) - 3 * 10;
	//printf("İşlem sonucu: %d\n",islem);

	return 0;
} // main'in sonu