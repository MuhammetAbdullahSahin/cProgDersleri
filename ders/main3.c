#include <stdio.h>

int main(void){
        int kr;

        kr = getchar();
        while (kr != EOF){
                putchar(kr);
                kr = getchar();
        }
}