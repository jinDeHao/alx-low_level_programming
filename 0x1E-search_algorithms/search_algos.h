#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
void printarr(int *array, size_t start, size_t end);
size_t binary_help(int *array, int value, size_t start, size_t end);

#endif
