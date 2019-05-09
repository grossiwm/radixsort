
#ifndef RADIXSORT_FUNCTIONS_H
#define RADIXSORT_FUNCTIONS_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "math.h"

void presentation();

int getLargest(int arr[], int n);

void countSort(int list[], int n, int exp);

void radixSort(int *list, int n);

void fillListWithRandom(int maxValue, int *array, int length);

int getMaximumPossibleNumber(int d);
void printArray(int * array, int size);


#endif //RADIXSORT_FUNCTIONS_H
