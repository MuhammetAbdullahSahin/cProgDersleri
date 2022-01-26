#include <stdio.h>

int main ()
{
	int secenek;
	int sayi1,sayi2;
	
	printf("Hesap makinesine hosgeldin!\n");
	printf("Yapmak istediginiz islemi secin\n");
	printf("1. Toplama\n");
	printf("2. Cikarma\n");
	printf("3. Carpma\n");
	printf("4. Bolme\n");

	scanf("%d",&secenek);
	printf("Islem yapilacak sayilari girin\n");
	scanf("%d %d",&sayi1,&sayi2);
	
	switch(secenek){
		case 1:
			printf("Iki sayinin toplami %d\n",sayi1+sayi2);
			break;
		case 2:
			printf("Iki sayinin farki %d\n",sayi1-sayi2);
			break;
		case 3:
			printf("Iki sayinin carpimi %d\n",sayi1*sayi2);
			break;
		case 4:
			printf("Iki sayinin bolumu %d\n",sayi1/sayi2);
			break;
		default:
			printf("Lutfen gecerli bir islem secin\n");
			break;
	}



    return 0;
}