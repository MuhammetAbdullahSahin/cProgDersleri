#include <stdio.h>


int main(){

	int hiz = 0;
	int ivme = 5;

	do{
		hiz += ivme;
		printf("Hiz: %d\n",hiz);
	}
	while(hiz < 50);
	
	return 0;
}