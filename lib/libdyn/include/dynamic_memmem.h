#include <stdlib.h>
#pragma once

/**
 * @brief dynamic_memmem - locate a piece of data in a memory area
*/
void *dynamic_memmem(void *haystack, size_t haystacklen, void *needle, size_t needlelen);
