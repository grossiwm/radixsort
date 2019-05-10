
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

void insertInQueue(node_t **rightQueue, int value);

node_t removeFromQueue(int positionInQueues, node_t **queues);

void printQueueValues(node_t *nodePointer);

void printAllQueues(node_t **queues, void (*printQueue)(node_t *));

int *getIntInArray(int number, int numberOfDigits);


#endif //RADIXSORT_FUNCTIONS_H
