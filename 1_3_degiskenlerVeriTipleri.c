#include <stdio.h>
#include <stdlib.h>
#include <float.h>


int main(){

	int x = 5;
	float y = 6.5;
	int z = x+y; // derleyici otomatik olarak float değerini integera çevirdi
	float w = x+y; // derleyici otomatik olarak int değerini floata çevirdi

	printf("%d\n", z);
	printf("%.2f\n", w);
	
	x = 10;
	y = 7.3;

	z = x + (int)y; // (int) değişken => değişkeni int e çevir type casting
	w = (float)x + y;
	
	printf("%d\n", z);
	printf("%.2f\n", w);
	
	return 0;
}