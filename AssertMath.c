/*
Simple program to demonstrate the flow of control of <assert.h>
Avinash Kumar
avianshbest3@gmail.com
*/

#include <assert.h>
#include <stdio.h>

int main()
{
    double x, y;
    while (1)
    {
        printf("Read in 2 floats:\n");
        scanf("%lf %lf", &x, &y); //Try entering character input it will behave like infinite loop
        assert(y != 0);
        printf("When divided X/Y = %lf\n", x / y);
    }
    return 0;
}
