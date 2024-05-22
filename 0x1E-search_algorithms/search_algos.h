#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int BS(int *array, size_t size, size_t i, int value);
int jump_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
#endif
