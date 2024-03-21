#include <stdlib.h>
#pragma once

/**
 * @brief memmem - locate a piece of data in a memory area
*/
void *memmem(void *haystack, size_t haystacklen, void *needle, size_t needlelen);
