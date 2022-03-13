#include <stdio.h>
#include <stddef.h>

#define SATIR 4
#define SUTUN 6

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Çok boyutlu diziler

void diziyi_yazdir(const int dizi[][SUTUN], size_t satir, size_t sutun);
// void diziyi_yazdir(size_t satir, size_t sutun, const int dizi[satir][sutun]);

int main(){

    srand(time(NULL));
    
    int dizi[SATIR][SUTUN] ={{10,15,16,10,5,6},
                            {20,21,-5,4,7,8},
                            {-7,24,68,-100,-47,-55},
                            {1,2,3,-65,-78,40} };
    int i,j = 0;

    diziyi_yazdir(dizi,SATIR,SUTUN); // madem yukarıda tanımladık neden fonksiyona gönderiyoruz?
    //diziyi_yazdir(SATIR,SUTUN,dizi);
    
    printf("%d\n", dizi[0][5]); // 6
    printf("%d\n", dizi[2][0]); // -7
    
	return 0;

}

// İki boyutlu diziyi düzgün yazdırabilmek için yardımcı fonksiyon
void diziyi_yazdir(const int dizi[][SUTUN], size_t satir, size_t sutun){
    size_t i,j;
    printf("\t");
    for(j=0;j<sutun;j++){
        printf("%6d",j);
    }
    printf("\n\n");

    for(i=0;i<satir;i++){
        printf("%d\t",i);
        for(j=0;j<sutun;j++){
            printf("%6d", dizi[i][j]);
        }
        puts("");
    }
    puts("");
}

