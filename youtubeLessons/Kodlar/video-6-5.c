	
#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Programın akışını kontrol etmek
// Atama operatörleri kısayol


int main(){

	int x = 10;

	//x = x + 5 ; 5 ekle
	x += 5;

	//x = x - 5;  5 çıkar
	x -= 5;

	//x = x * 5;  5 ile çarp
	x *= 5;

	//x = x / 5;  5'e böl
	x /= 5;

	//x = x % 5;  mod5
	x %= 5;


	// Preincrement - Postincrement
	int y = 5;

	printf("y: %d\n",y);
	printf("y++: %d\n",y++);

	printf("y: %d\n",y);
	printf("++y: %d\n",++y);

	printf("y: %d\n",y);
	printf("y--: %d\n",y--);

	printf("y: %d\n",y);
	printf("--y: %d\n",--y);	

	return 0;
}

