#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i;
    /*Printing the sine table*/
    printf("                                   SINE VALUES TABLE:\n");
    printf("******************************************************************************************\n");
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf(" sin(%lf) = %lf\t", interval, fabs(sin(interval))); //fabs returns float value while abs return integer value.
    }
    /*Printing the cosine table*/
    printf("\n\n\n                                   COSINE VALUES TABLE:\n");
    printf("******************************************************************************************\n");
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf(" cos(%lf) = %lf\t", interval, fabs(cos(interval))); //fabs returns float value while abs return integer value.
    }


    printf("******************************************************************************************");
    return 0;
}