#include "memmem.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *haystack = "hello world";
    char *needle = "world";
    void *result = memmem(haystack, strlen(haystack), needle, strlen(needle));
    if (result)
        printf("Found needle at %p\n", result);
    else
        printf("Needle not found\n");
    return 0;
}
