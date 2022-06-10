#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int a;

        scanf("%d", &a);

        if (a <= 0) {
                fprintf(stderr, "Error: Number must be a positive integer\n");
                return 1;
        }

        printf("%d\n", a);

        return 0;
}
