/*Abstract data_types
STACK to reverse a string
Avinash Kumar
avinashbest3@gmail.com
*/
#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN - 1)

typedef struct STACK
{
    char s[MAX_LEN];
    int top;
} STACK;

void reset(STACK *Stk)
{
    Stk->top = EMPTY;
}

void push(char c, STACK *stk)
{
    stk->top++;
    stk->s[stk->top] = c;
}

char pop(STACK *stk)
{
    return (stk->s[stk->top--]);
}

char top(const STACK *stk)
{
    return (stk->s[stk->top]);
}

int is_empty(const STACK *stk)
{
    return (stk->top == EMPTY);
}

int is_full(const STACK *stk)
{
    return (stk->top == FULL);
}

int main()
{
    STACK stack_of_char;
    char *str = "My name is Avinash";
    char str_back[20];
    int i = 0;
    reset(&stack_of_char);
    printf("Original is: %s\n", str);
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        push(str[i++], &stack_of_char);
    };
    i = 0;
    while (!is_empty(&stack_of_char) && i < 20)
    {
        str_back[i++] = pop(&stack_of_char);
    }
    printf("Reverse is: %s\n", str_back);
    printf("\n\n");

    return 0;
};
