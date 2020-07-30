/*
Sorting: Bubble sort inefficient
Time complexity: O(n*n)
*/

#include <stdio.h>
#define SIZE 5
void swap(int *a, int *b) //swap function
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

void print_array(int how_many, int data[], char *str)
{
    printf("%s", str);
    for (int i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
    }
}

void bubble(int data[], int how_many) //Bubble sorting Algorithm
{
    int go_on;
    int i, j;
    for (i = 0; i < how_many; i++)
    {
        print_array(how_many, data, "Inside Bubble Sort:\n");
        printf("i=%d, input any int to continue: ", i);
        scanf("%d", &go_on);
        for (j = how_many - 1; j > i; j--)
        {
            if (data[j - 1] > data[j])
            {
                swap(&data[j - 1], &data[j]);
            }
        }
    }
}

int main(void)
{
    int grades[SIZE] = {78, 67, 92, 83, 88};

    print_array(SIZE, grades, "My grades:\n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "\nMy sorted grades:\n");

    return 0;
}