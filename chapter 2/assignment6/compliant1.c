#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t bufsize = 0;
    size_t buflen = 0;
    char* cmdline = NULL;

    for (int i = 1; i < argc; i++)
    {
        const size_t len = strlen(argv[i]);
        if (bufsize - buflen <= len)
        {
            bufsize = (bufsize + len) * 2;
            cmdline = realloc(cmdline, bufsize);
            if (NULL == cmdline)
            {
                return 1; /* Realloc failure */
            }
        }
        memcpy(cmdline + buflen, argv[i], len);
        buflen += len;
        cmdline[buflen++] = ' ';
    }
    cmdline[buflen] = '\0';

    /* ... */

    free(cmdline);
    return 0;
}