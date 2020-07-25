#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i;
    printf("                                   SINE VALUES TABLE:\n");
    printf("******************************************************************************************\n");
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf(" sin(%lf) = %lf\t", interval, fabs(sin(interval))); //fabs returns float value while abs return integer value.
    }
    printf("******************************************************************************************");
    return 0;
}