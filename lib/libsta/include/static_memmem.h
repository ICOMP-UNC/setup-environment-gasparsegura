#include <stdlib.h>
#pragma once

/**
 * @brief static_memmem - locate a piece of data in a memory area
*/
void *static_memmem(void *haystack, size_t haystacklen, void *needle, size_t needlelen);
