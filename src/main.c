#include <stdio.h>
#include <string.h>
#include "dynamic_memmem.h"
#include "static_memmem.h"

int main(int argc, char *argv[])
{
    char *haystack_1 = "hello world";
    char *haystack_2 = "hi again";
    char *needle = "world";
    void *result_1 = dynamic_memmem(haystack_1, strlen(haystack_1), needle, strlen(needle));
    void *result_2 = static_memmem(haystack_2, strlen(haystack_2), needle, strlen(needle));
    printf("Result 1: %s\n", (char *)result_1);
    printf("Result 2: %s\n", (char *)result_2);
}
