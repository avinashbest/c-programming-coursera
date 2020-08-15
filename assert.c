/*
Use asserts within a trival program
Avinash Kumar
avianshbest3@gmail.com
*/
#define NDEBUG //Goes before <assert.h> for proper running of program
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    assert(0); //Abort Program if NDEBUG not there.
    printf("My Program runs\n");
    return 0;
}
