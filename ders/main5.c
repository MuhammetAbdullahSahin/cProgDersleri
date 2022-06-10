#include <stdio.h>
#include <math.h>

int main(){
        int i;

        for ( i = 1; i <= 100 ; i++)
        {
                if (i % 15 == 0){
                        printf("fizzbuzz   ");
                }
                else if (i % 5 == 0){
                        printf("buzz   ");
                }
                else if (i % 3 == 0)
                {
                        printf("fizz   ");
                }
                
                printf("%d   ", i);
        }
        


        return 0;
}