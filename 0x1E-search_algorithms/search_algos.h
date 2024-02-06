#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int binarySearch(int *array, int left, int right, int value);

#endif
