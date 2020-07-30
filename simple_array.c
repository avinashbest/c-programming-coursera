// Use of simple array
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;

    printf("\nMy grades are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", grades[i]);
    }
    printf("\n\n");

    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + grades[i];
    }
    printf("My average grade is %.2f\n\n", sum / SIZE);

    return 0;
};
