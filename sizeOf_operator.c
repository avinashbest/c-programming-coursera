/*Fundamental Types sizeof Operator*/
#include <stdio.h>

int main(void)
{
    int a, b, c; //Declaration and Initialization
    double average = 0.0;

    char ch = 'e';

    printf("***On My System***");

    printf("\nint is %lu bytes.\n", sizeof(int));
    printf("long is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(ch));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));

    return 0;
}