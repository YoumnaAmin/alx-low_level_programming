#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int BS(int *array, size_t size, size_t i, int value);

#endif
