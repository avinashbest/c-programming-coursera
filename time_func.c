#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 1000 //Number of fct calls                       //Try putting 1 million also
#define NCOLS 8     //Number of columns
#define NLINES 3    //Number of lines

int main()
{
    int i, val;
    long begin, diff, end;
    begin = time(NULL);
    srand(time(NULL));
    printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
    for (i = 1; i <= NCALLS; i++)
    {
        val = rand();
        if (i <= NCALLS * NLINES)
        {
            printf("%7d", val);
            if (i % NCOLS == 0)
            {
                putchar('\n');
            }
        }
        else if (i == NCALLS * NLINES + 1)
        {
            printf("%7s\n\n", ".....");
        }
    }
    end = time(NULL);
    diff = end - begin;
    printf("%s%ld\n%s%ld\n%s%ld\n%s%ld\n%s%,10f\n\n", "end time:", end, "begin time:", begin, "elapsed time:", diff, "time for each call:", (double)diff / NCALLS);

    return 0;
}
