//A simple C program to calculate factorial of a number maximum upto 20 with 100% accouracy.
#include <stdio.h>

long int factorial(int n)
{
    long f = 1;
    int i;
    for (i = 1; i <= n; i++) //Calculation using Iterative approach
    {
        f = f * i;
    }
    return f;
}
//Calculation using Recursive approach
long int recursive_factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (recursive_factorial(n - 1) * n);
    }
}

int main(void)
{
    int how_many = 0;
    printf("I want table of factorial up to n: ");
    scanf("%d", &how_many);
    if(how_many == 0)
    {
        printf("\nIterative Factorials = 1\n");
        printf("\nIterative Factorials = 1\n");
        return 0;
    }

    printf("\nIterative Factorials:\n");

    for (int i = 1; i <= how_many; i++)
    {
        printf("%d\t%ld\n", i, factorial(i));
    }
    printf("\nRecursive Factorials:\n");
    for (int i = 1; i <= how_many; i++)
    {
        printf("%d\t%ld\n", i, recursive_factorial(i));
    }
    return 0;
}
