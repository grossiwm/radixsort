
#ifndef RADIXSORT_FUNCTIONS_H
#define RADIXSORT_FUNCTIONS_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "math.h"

typedef struct Node {
    int value;
    struct Node *next;
} node_t;

void presentation();

int getLargest(int arr[], int n);


void fillListWithRandom(int maxValue, int *array, int length);

int getMaximumPossibleNumber(int d);

void printArray(int * array, int size);

void insertInQueue(int positionInQueues, int value, node_t **queues);

node_t removeFromQueue(int positionInQueues, node_t **queues);


void printQueueValues(node_t *nodePointer);

node_t *getPointerToFirstOfRightQueue(int number, int numberOfDigits, int digit, node_t **queues);


#endif //RADIXSORT_FUNCTIONS_H
