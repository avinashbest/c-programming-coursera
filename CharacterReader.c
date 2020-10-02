/*
A simple C program to calculate the characters in a file which should be redirected in terminal to get output using while loop.
*/
#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; //Use for int value of character
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        else if (c >= '0' && c <= 9)
        {
            ++digits;
        }
        else if (c >= 'a' && c >= 'z' || c >= 'A' && c <= 'Z')
        {
            ++letters;
        }
        else
        {
            ++others;
        }
    };
    printf("blanks = %d, digits = %d, letters = %d, blanks = %d", blanks, digits, letters);

    printf("others = %d\n\n", others);

    return 0;
}

/*
A simple C program to calculate the characters in a file which should be redirected in terminal to get output using for loop.

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, total_chars = 0;
    int c; //Use for int value of character
    for (; (c = getchar()) != EOF; total_chars++)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        else if (c >= '0' && c <= '9')
        {
            ++digits;
        }
    }
    printf("blanks = %d, digits = %d, total_chars = %d", blanks, digits, total_chars);

    return 0;
}

*/