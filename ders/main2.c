#include <stdio.h>
#include <math.h>

int main(){

        int i, j, n;
        printf("Bitis degeri verin: ");
        scanf("%d", &j);
        printf(" n               2^n\n");
        printf("____________________\n\n");
        
        for(i = 0; i <= j ; i++){
                n = pow(2,i);
                printf("%2d %17d\n", i, n);
          }
        return 0;
}