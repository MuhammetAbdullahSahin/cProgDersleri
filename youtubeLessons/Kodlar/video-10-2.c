#include <stdio.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// Pointer Aritmetiği

int main(){

    int sayilar[5] = {5,7,4,3,8};
    for(int i=0; i < 5; i++)
        printf("%d ",sayilar[i]);
    puts("");

    int* dPtr;
    // Alttaki 3 ifade de birbirine denk.
    dPtr = sayilar;
    printf("Adres: %p\nDeger: %d\n",dPtr,*dPtr);

    //dPtr = &sayilar;
    //printf("Adres: %d\nDeger: %d\n",dPtr,*dPtr);
    //dPtr = &sayilar[0];
    //printf("Adres: %d\nDeger: %d\n",dPtr,*dPtr);


    
    int *ptr = sayilar;
    printf("*(ptr): \t%d\n", *(ptr));       // sayilar[0]
    printf("*(ptr+1): \t%d\n", *(ptr+1));   // sayilar[1]
    printf("*(ptr+2): \t%d\n", *(ptr+2));   // sayilar[2]
    printf("*(ptr+3): \t%d\n", *(ptr+3));   // sayilar[3]

    
    //sayilar+=2; // izin verilen bir şey değil çünkü dizi isimleri const pointerlardır.
    ptr += 2;
    
    printf("After +=2 *ptr: %d\n", *ptr); 
    printf("*(++ptr): \t%d\n", *++ptr);
    printf("*(++ptr): \t%d\n", *++ptr);
    printf("*(--ptr): \t%d\n", *--ptr);
    

   
    dPtr = sayilar;
    for(int i=0; i < 5; i++){
        *dPtr += 5;    // sayilar[i] += 5;
        dPtr++;          
    }
    
    for(int i=0; i < 5; i++)
        printf("%d ",sayilar[i]); 
    puts("");
    
    
    // Yapılabilecek hata
    int x[4] = {3,1,2,4};
    int* ptr = &x;
    printf("%d", *(ptr+1)); // == ptr[0] + 1 *(ptr+1)

    return 0;
}
