#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
void printarr(int *array, size_t start, size_t end);
size_t binary_help(int *array, int value, size_t start, size_t end);

int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);
size_t prob(int *array, int value, size_t low, size_t high);

int exponential_search(int *array, size_t size, int value);

#endif
