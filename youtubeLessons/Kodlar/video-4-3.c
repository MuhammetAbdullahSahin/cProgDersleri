#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Veri tipleri

int main(){

	int tamSayi = 5;
	printf("int:\t%d\n",tamSayi);

	int tamSayi2 = 99999999999; // maksimum değerini aşıyor
	printf("int:\t%d\n",tamSayi2);

	long uzunSayi = 5;	
	printf("long:\t%li\n",uzunSayi);

	long uzunSayi2 = 9999999999999999; //integerdan daha fazla değer tutabiliyor
	printf("long:\t%li\n",uzunSayi2);


	char karakter = 'c';
	printf("char:\t%c\n",karakter);


	float ondalik = 0.53;
	printf("float:\t%f\n",ondalik);

	float ondalik2 = 0.888888888; 		
	printf("float:\t%f\n",ondalik2);

	
	return 0;
} // main'in sonu