
#include "functions.h"


//Sendo o digito 0 o menos significativo
node_t *getPointerToFirstOfRightQueue(int number, int numberOfDigits, int digit, node_t **queues) {
    int *array = (int *) malloc(sizeof(int)*digit);
    int cont = 0;
    while(cont < numberOfDigits) {

        if (number/10 != 0) {
            array[cont] = number%10;
        } else {
            array[cont] = 0;
        }

        cont++;
    }

    return queues[array[digit]];

}

void insertInQueue(int positionInQueues, int value, node_t **queues) {

    node_t *link = (node_t *) malloc(sizeof(node_t));
    link->next = NULL;
    link->value = value;

    if (queues[positionInQueues] == NULL) {
        queues[positionInQueues] = link;
    } else {
        node_t *nodePointer = queues[positionInQueues];

        while (nodePointer->next != NULL) {
            nodePointer = nodePointer->next;
        }
        nodePointer->next = link;
    }

}

node_t removeFromQueue(int positionInQueues, node_t **queues) {
    node_t *first = queues[positionInQueues];
    node_t *newFirstPointer = first->next;
    queues[positionInQueues] = newFirstPointer;
    free(first);
}


void printQueueValues(node_t *nodePointer) {
    if (nodePointer != NULL) {
        printf(" %d",nodePointer->value);
        printQueueValues(nodePointer->next);
    }
}

void presentation() {
    printf(""
           "______          _ _        _____            _   \n"
           "| ___ \\        | (_)      /  ___|          | |  \n"
           "| |_/ /__ _  __| |___  __ \\ `--.  ___  _ __| |_ \n"
           "|    // _` |/ _` | \\ \\/ /  `--. \\/ _ \\| '__| __|\n"
           "| |\\ \\ (_| | (_| | |>  <  /\\__/ / (_) | |  | |_ \n"
           "\\_| \\_\\__,_|\\__,_|_/_/\\_\\ \\____/ \\___/|_|   \\__|\n"
           "                                                \n"
           "                                                "
           "\n");
    printf("\nIntegrantes: Gabriel Rossi, Abel Warakia, Fernando Gatto");
    printf("\n---------------------------------------------------------\n");

}

int getLargest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];
    return largest;
}


void fillListWithRandom(int maxValue, int *array, int length) {
    printf("\nGerando lista aleatória...\n");
    srand(time(NULL));
    for( int i = 0; i < length; i++ ) {
        array[i] = rand() % maxValue;
    }
}

int getMaximumPossibleNumber(int d) {
    int value = 0;
    for (int i; i < d; i++) {
        value += 9 * pow(10,i);
    }
    return value;
}

void printArray(int * array, int size){

    int i;
    printf("[ ");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("]\n");
}
