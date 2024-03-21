#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memmem.h"

void *memmem(void *haystack, size_t haystacklen, void *needle, size_t needlelen)
{
    char *bf = (char *)haystack, *pt = (char *)needle, *p = bf;

    while (needlelen <= (haystacklen - (unsigned long)(p - bf)))
    {
        if (NULL != (p = memchr(p, (int)(*pt), haystacklen - (unsigned long)(p - bf))))
        {
            if (0 == memcmp(p, needle, needlelen))
                return p;
            else
                ++p;
        }
        else
            break;
    }
    return NULL;
}
