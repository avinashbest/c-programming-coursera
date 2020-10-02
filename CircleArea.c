//Simple Program to calculate the area of the circle
#include <stdio.h>  //Preprocessor Directives
#define PI 3.14159

int main()
{
    double area = 0.0, radius = 0.0; //Variables
    printf("Enter radius:");
    scanf("%lf", &radius);
    area = PI * radius * radius; //Classic formula
    printf("Radius is %lf meters and area is %lf sq. meters\n", radius, area);

    return 0;
}
