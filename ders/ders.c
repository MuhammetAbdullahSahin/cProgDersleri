#include <stdio.h>
#include <limits.h>

int main(void)
{
        printf("sizeof(int): %d\n", sizeof(int));
        printf("INT_MAX: %d\n", INT_MAX);
        printf("INT_MIN: %d\n", INT_MIN);

        printf("sizeof(long): %d\n", sizeof(long));
        printf("LONG_MAX: %ld\n", LONG_MAX);
        printf("LONG_MIN: %ld\n", LONG_MIN);

        printf("sizeof(unsigned long): %d\n", sizeof(unsigned long));
        printf("ULONG_MAX: %lu\n", ULONG_MAX);

        printf("sizeof(unsigned long long): %d\n", sizeof(unsigned long long));
        printf("ULLONG_MAX: %llu\n", ULLONG_MAX);
}
