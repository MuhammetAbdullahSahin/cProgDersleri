#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// For döngüsü

int main(){

	int sayac;
	
	for(sayac = 0; sayac < 10; sayac++){
		printf("Sayac: %d\n",sayac);
	}

	sayac=0;
	for(  ; sayac++<10 ; ){}


	int i,j;

	for(i = 0; i<=80; i+=5){}
	for(j = 625; j>0; j/=5){}
	
	int k = 0;
	for(; k<20; k++){} // başlangıç ifadesini koymayabiliriz.
	
	for(; k < 50; ){ // yapılacak işlemi sonradan yapabiliriz.
		k++;
	}

	int m = 10;
	for(;;){	// başka değişkene bağlı olarak döngü yazılabilir.
		if(m<30){
			break;
		}
		m+=5;
	}
	
	int a,b;

	for(a=0, b=10; a<b && b < 20; a+=6, b+=2){ // birden fazla değişken ile işlem yapılabilir.
		printf("a:%d b:%d\n",a,b);
	}
	
	return 0;
} 