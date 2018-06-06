#include "foo.h"
#include <stdio.h>

void foo()
{
    static int count = 0; // initialized once, static variables retain thier value during the lifetime of the entire program. Even if thier initialization comes up again due to program logic.
    printf("%d ", count++);
}

void bar()
{
    printf("printing an incrimented static variable\n");
    for(int i = 0; i < 5; i++)
    {
        foo();
    }
    printf("\n");
}

void fiz()
{
    int count = 0;
    printf("%d ", count++);
}

void buz()
{
    printf("printing an incrimented normal variable\n");
    for(int i = 0; i < 5; i++)
    {
        fiz();
    }
    printf("\n");
}

void doo()
{
    printf("printing uninitialized memory\n");
    int i;
    printf("%d", i);
    printf("\n");
}

void liz()
{
    printf("printing out of bounds memory\n");
    char reserved[20];
    char out = reserved[21];
    printf("array: %s\nout of bound: %d\n", reserved, out);
    printf("\n");
}