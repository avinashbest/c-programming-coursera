/*
Demonstrating the while loop
*/
#include <stdio.h>

int main(void)
{
    int repeat = 0;
    printf("\n\nHow strong is your love 1-100? : ");
    scanf("%d", &repeat);
    printf("I love you very ");
    while (repeat > 0)
    {
        printf("very ");
        repeat--;
    };
    printf("much.\n\n");

    return 0;
};
