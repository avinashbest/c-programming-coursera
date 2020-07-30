/*
Table of Square and Cubes
Function Prototype
*/

#include <stdio.h>
/*Function Declaration*/
double square(double);
double cube(double);
/*Main Function*/
int main()
{
    int how_many = 0;
    printf("I want square and cube for 1 to n where n is: ");
    scanf("%d", &how_many);

    printf("Square and Cubes by interval of 0.10\n");

    printf("Number\t\tSquare\t\tCube");

    for (int i = 1; i <= how_many; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\n%lf\t%lf\t%lf", i + j / 10.0, square(i + j / 10.0), cube(i + j / 10.0));
        }
    }
    printf("\n\n\n");

    return 0;
}

double square(double x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * x;
}