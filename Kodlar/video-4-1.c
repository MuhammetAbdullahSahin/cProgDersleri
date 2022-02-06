#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Ekrana sayı yazdırmak

int main(){

	int x; // x adında bir TAMSAYI değişken oluşturduk
	x = 5; // x değişkenine 5 sayısal değerini atadık.

	printf("Oluşturduğumuz x değişkeninin değeri: %d\n",x); // %d tamsayı değerini yazdıracağımızı bildirir.

	int y = 10; // y adında bir tamsayı değişkeni oluşturup 10 değerini atadık.

	printf("Oluşturduğumuz y değişkeninin değeri: %d\n",y);

	printf("Oluşturduğumuz x ve y'nin değerlerinin toplamı: %d\n",x+y); // matematikteki +,-,*,/ operasyonları aynı şekilde bulunmaktadır.

	int z = x+y; // z adında bir tamsayı değişkeni oluşturup x+y'nin sayısal değerini atadık.
	printf("Oluşturduğumuz z değişkeninin değeri: %d\n",z);

	return 0;
} // main'in sonu