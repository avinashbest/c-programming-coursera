//The distance of a marathon in kilometers
#include <stdio.h>

int main()
{
    int miles = 26, yards = 385;
    double kilometers;
    kilometers = 1.609 * (miles + yards / 1760.0);  //General Formula
    printf("\nA marathon is %lf kilometeres.\n\n", kilometers);
    return 0;
}
