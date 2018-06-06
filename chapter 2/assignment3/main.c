#include <stdio.h>
#include "foo.h"

int main ()
{
    char *ptr = "words";
    printf("%s\n", (ptr + (sizeof(char) * 2))); // here i explicitly state the size top use by using the sizeof() function.
    printf("%s\n", (ptr + 1)); // Is the interpreter knowing automatically to use char size to compile?
    printf("%s\n", (ptr - 2)); // Hah well it was a good try.

    foo();

    fiz();

    buz();

    fet();
}