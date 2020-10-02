/*
Use of simple arrays as parameters 
*/

#include <stdio.h>
#define SIZE 5
double average_grades(int how_many, int grades[])
{
    double sum = 0.0;
    for (int i = 0; i < how_many; i++)
    {
        sum += grades[i];
    }
    return (sum / how_many);
}

void print_grades(int how_many, int grades[])
{
    printf("\nI have %d grades:\n\n", how_many);
    for (int i = 0; i < how_many; i++)
    {
        printf("%d\t", grades[i]);
    }
}

int main(void)
{
    int grades[SIZE] = {78, 67, 92, 83, 88};

    print_grades(SIZE, grades);
    printf("\n\n");
    printf("My average is %.2f\n\n", average_grades(SIZE, grades));
    return 0;
}
