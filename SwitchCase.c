/*
floats are non-int tyoe and only integer types char, int long can be used as labels
*/
#include <stdio.h>

int main(void)
{
    int speed;
    printf("\nEnter your speed as an integer: ");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
    switch (speed)
    {
    case 65:
        printf("No speeding Ticket\n\n");
        break;
    case 70:
        printf("Speeding Ticket\n\n");
        break;
    case 90:
        printf("Expensive Speeding Ticket\n\n");
        break;

    default:
        printf("Incorrect Speed\n\n");
        break;
    }
    return 0;
}
