#include <stdio.h>
#include <math.h>
int main(void)
{
    double sinValue, number;
    
    printf("Enter the Value of Sine for calculation: ");
    scanf("%lf", &number);

    sinValue = sin(number); //Calculation of sine value

    printf("\nThe sine value of %lf is %lf", number, sinValue);
    return 0;
}