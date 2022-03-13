#include <stdio.h>
#include <stddef.h>

// Uzaktan Akademi C ile Programlamaya Giriş 
// Göktuğ Başaran
// İşaretçilere Giriş - Pointer konsepti

void karesini_al(int* x);

int main(){

    int* ptr1;
    char* ptr2;
    float* ptr3;

    ptr1 = 0;       // bu iki ifade eş
    ptr2 = NULL;    // bu iki ifade eş
    printf("ptr1:%d, ptr2:%d\n",ptr1,ptr2);

    
    int x = 23;
    char c = 'a';
    float f = 5.37;
    /*
    ptr1 = &x;   // x değişkeninin adresini ptr1'e yaz.
    ptr2 = &c;   // c değişkeninin adresini ptr2'ye yaz.
    ptr3 = &f;   // f değişkeninin adresini ptr3'e yaz.

    
    printf("x'in adresi:\t%p\nptr1'in değeri:\t%p\n\n",&x,ptr1);
    printf("c'in adresi:\t%p\nptr2'in değeri:\t%p\n\n",&c,ptr2);
    printf("f'in adresi:\t%p\nptr3'in değeri:\t%p\n\n",&f,ptr3);

    printf("x'in değeri:\t\t\t%d\nptr1'in gösterdiği değer:\t%d\n\n",x,*ptr1);
    printf("c'in değeri:\t\t\t%c\nptr2'in gösterdiği değer:\t%c\n\n",c,*ptr2);
    printf("f'in değeri:\t\t\t%f\nptr3'in gösterdiği değer:\t%f\n\n",f,*ptr3);
    */

    /*
    scanf("%d",&x); // pass by reference
    karesini_al(&x);// pass by reference
    printf("%d\n", x);
    */
    
    
    char d[500];
    scanf("%s",d); // neden d & almadı?
    printf("%s\n",d);
    
    return 0;
}

void karesini_al(int* x){
    (*x) = (*x) * (*x);
}
