/*
Enumerated Types
Avinash Kumar
avinashbest3@gmail.com
*/
#include <stdio.h>

enum day
{
    sun,
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat
}; //Declare type

void print_day(enum day d)
{
    switch (d)
    {
    case sun:
        printf("Sunday");
        break;
    case mon:
        printf("Monday");
        break;
    case tues:
        printf("Tuesday");
        break;
    case wed:
        printf("Wednesday");
        break;
    case thurs:
        printf("Thursday");
        break;
    case fri:
        printf("Friday");
        break;
    case sat:
        printf("Saturday");
        break;
    default:
        printf("%d is an error", d);
        break;
    }
}

enum day next_day(enum day d)
{
    return (d + 1 % 7);
}

int main()
{
    enum day today = fri;
    print_day(today);
    printf("\n");
    print_day(7);
    printf("\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}
