#include <stdio.h>

void wrt_very(int count) //Function Declaration
{
    while (count > 0)
    {
        printf("very ");
        count--;
    }
    printf("much.\n\n");
}

int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10? : ");
    scanf("%d", &repeat); //Try passing something larger number.
    printf("\nI love you very ");
    wrt_very(repeat); //Function call
    return 0;
}