#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H
/****** LIBRARIES *******/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/***********************/

/****** FUNCTIONS ******/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void _print(int *array, size_t size, size_t index);
int jump_search(int *array, size_t size, int value);

/**********************/

#endif
