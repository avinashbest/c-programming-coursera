/*
Logical Operators and short circuit evaluation
*/
#include <stdio.h>

int main(void)
{
    int outside, whether;
    printf("Enter if outside 1 true 0 false: ");
    scanf("%d", &outside);
    printf("Enter if rain 1 true 0 false: ");
    scanf("%d", &whether);
    if (outside && whether)
    {
        printf("Please! Use an Umbrella.\n");
    }
    else
    {
        printf("Dress normally.\n\n");
    }
    return 0;
}
