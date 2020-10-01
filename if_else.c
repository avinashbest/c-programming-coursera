/*if and relations and flow of control*/
#include <stdio.h>

int main()
{
    int speed;
    printf("Enter your speed as an integer: ");
    scanf("%d", &speed);
    if (speed < 65)
    {
        printf("\nNo Speeding Ticket\n\n");
    }
    else
    {
        printf("\nSpeeding Ticket\n\n");
    }
    return 0;
}
