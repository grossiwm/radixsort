#include "functions.h"

int main()
{

//    presentation();

    int n;
    int d;
    //Vetor que guarda ponteiros para primeiras posições de filas
    node_t *queues[10] = {NULL};

    printf("\nInsira o número de elementos a serem gerados para a lista: ");
    scanf("%d", &n);

    printf("\nInsira o número de casas decimais máximas desses números: ");
    scanf("%d", &d);

    int *list = (int *) malloc(sizeof(int)*n);

    fillListWithRandom(getMaximumPossibleNumber(d), list, n);

    printf("\nLista não ordenada: ");
    printArray(list, n);

    int number;
    node_t *rightQueue;
    int *numberArray;
    for (int i = 0; i < n; i++) {
        number = list[i];
        numberArray = getIntInArray(number, d);
        rightQueue = getRightQueue(0, numberArray, queues);
        insertInQueue(rightQueue, number);
    }

    printAllQueues(queues,printQueueValues);

    int position = 0;
    for (int i = 0; i < 10; i++) {
        while (queues[i] != NULL) {
            list[position] = removeFromQueue(i, queues);
            position++;
        }
    }

    printAllQueues(queues,printQueueValues);

    printArray(list, n);

    return 0;
}