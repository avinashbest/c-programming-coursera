/*
Storage class demonstration Program.

Not useful code
*/
#include <stdio.h>

extern int reps = 0;

void f(void)
{
    static int called = 0;
    printf("f called %d\n", called);
    called;
    reps = reps + called;
}

int main()
{
    auto int i = 1;
    const int limit = 10;
    for (i = 1; i < limit; i++)
    {
        printf("i local = %d, reps global = %d\n", i, reps);
        f(); //function called
    }

    return 0;
}
