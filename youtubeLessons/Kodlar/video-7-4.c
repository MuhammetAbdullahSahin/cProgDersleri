#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Scope

void yerel_degisken();
void yerel_statik_degisken();
void global_degisken();

int x = 1; // global değişken tanımlamış olduk. mainin dışında tanımladığımız değişkenler global olur.


int main(){

	int x = 10;
	printf("Main içerisindeki lokal x:\t%d\n",x);

	{ // bir adet scope açmış olduk
		int x = 7;
		printf("Main içerisindeki scope başlangıçta lokal x:\t%d\n",x);
		x++;
		printf("Main içerisindeki scope çıkarken lokal x:\t%d\n",x);
	}

	printf("Main içerisindeki lokal x:\t%d\n",x);

	yerel_degisken();
	yerel_statik_degisken();
	yerel_degisken();
	global_degisken();
	yerel_statik_degisken();
	global_degisken();

	return 0;
}


void yerel_degisken(){
	int x = 30;   // bu fonksiyon her çağırıldığında tekrardan bir x oluşturulur.
	printf("yerel_degisken içerisinde başlangıçta lokal x:\t%d\n",x);
	x*=20;
	printf("yerel_degisken içerisinde çıkarken lokal x:\t%d\n",x);
}

void yerel_statik_degisken(){
	static int x = 50; // bu fonksiyon ne kadar çağrılırsa çağrılsın 1 adet x oluşturulur.
	printf("yerel_statik_degisken içerisinde başlangıçta statik x:\t%d\n",x);
	x++;
	printf("yerel_statik_degisken içerisinde çıkarken statik x:\t%d\n",x);
	
}

void global_degisken(){
	printf("global_degisken içerisinde başlangıçta global x:\t%d\n",x);
	x-=100; // global olarak tanımlanan x'e etki eder.
	printf("global_degisken içerisinde çıkarken global x:\t%d\n",x);
}
