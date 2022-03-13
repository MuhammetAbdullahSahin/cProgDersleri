#include <stdio.h>
#include <stddef.h>

#include <stdlib.h>
#include <time.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Dizilere giriş -- Örnek

int main(){

    unsigned int zar_sonucu; // atılan bir zarın sonucu
    unsigned int sayac; // atılacak zar sayısı
    unsigned int sonuc[6] = {0}; // atılan zarları tutacak olan dizi

    srand(time(NULL)); // rastgele sayılar üretebilmemiz için yazmamız gereken bir kod
    
    for(sayac=0; sayac<600000; sayac++){
        zar_sonucu = (rand()%6); // rand()%6 0 döndürebilir bu yüzden +1 yapıyoruz.
        sonuc[zar_sonucu]++; // atılan zarın değerini 1 arttır
    }

    printf("Zar:\tMiktarı:\n");
    size_t i = 0;
    for(; i<6; i++){
        printf("%d\t%d\n",i,sonuc[i]);
    }

	return 0;

}
