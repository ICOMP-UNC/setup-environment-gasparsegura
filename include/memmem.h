#include <stdlib.h>
#pragma once

/**
 * @brief memmem - locate a piece of data in a memory area
 *
 * @param haystack - the memory area to search
 * @param haystacklen - the length of the memory area to search
 * @param needle - the data to search for
 * @param needlelen - the length of the data to search for
 * @return a pointer to the first occurrence of the data in the memory area, or NULL if the data is not found
*/
void *memmem(void *haystack, size_t haystacklen, void *needle, size_t needlelen);
