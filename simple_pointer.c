// Use of pointers
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;

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
    printf("My average grade is %.2f\n", sum / SIZE);

    printf("Sum is at %p(hexa-decimal address) or %lu(integral address) and sum of grades is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);

    printf("\nSum is at %lu to %lu\n", grades, grades + 5);

    return 0;
}
