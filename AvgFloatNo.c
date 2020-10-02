/*Fundamental Types and Assignment*/
#include <stdio.h>

int main(void)
{
    int a, b, c; //Declaration of Variables
    double average = 0.0;

    printf("Enter the three number to get average:");
    scanf("%d%d%d", &a, &b, &c);

    average = (a + b + c) / 3.0; //Conversion

    printf("Average = %.2lf\n", average);
    return 0;
}