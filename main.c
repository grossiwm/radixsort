#include "functions.h"

int main()
{

//    presentation();
//
//    int n;
//    int d;
//
//    //Vetor que guarda ponteiros para primeiras posições de filas
    node_t *queues[10] = {NULL};
//
//
//    printf("\nInsira o número de elementos a serem gerados para a lista: ");
//    scanf("%d", &n);
//
//    printf("\nInsira o número de casas decimais máximas desses números: ");
//    scanf("%d", &d);
//
//    int *list = (int *) malloc(sizeof(int)*n);
//    fillListWithRandom(getMaximumPossibleNumber(d), list, n);
//
//    printf("\nLista não ordenada: ");
//    printArray(list, n);
//
//
//
//    printf("\nLista ordenada: ");

    insertInQueue(4, 1, queues);
    insertInQueue(4, 6, queues);
    insertInQueue(4, 5, queues);
    insertInQueue(4, 3, queues);

    printQueueValues(queues[4]);

    printf("\n");

    removeFromQueue(4, queues);

    printQueueValues(queues[4]);

    printf("\n");

    removeFromQueue(0, queues);

    printQueueValues(getPointerToFirstOfRightQueue(34, 4, int digit, node_t **queues));




    return 0;
}