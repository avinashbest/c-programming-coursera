/*
Conversion of Fahrenheit to Celsius

C = (F - 32) / 1.8
*/
#include <stdio.h>

int main()
{
    int fahrenheit, celsius;

    printf("Please enter farenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8; //conversion
    printf("\n%d fahrenheit is %d celsius.\n", fahrenheit, celsius);

    return 0;
}
