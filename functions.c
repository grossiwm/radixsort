
#include "functions.h"



int *getIntInArray(int number, int numberOfDigits) {
    //Cria um array com os algarismos de um número
    int *array = (int *) malloc(sizeof(int)*numberOfDigits);
    int rest = 0;
    int cont = 0;

    while(cont < numberOfDigits) {
        if (number > 0) {
            rest = number % 10;
            number /= 10;
            array[cont] = rest;
            cont++;
        } else {
            array[cont] = 0;
            cont++;
        }
    }
    return array;

}

node_t **getRightQueue(int step, int *numberArray, node_t **queues) {

    int number = numberArray[step];

    return &queues[number];
}

void insertInQueue(node_t **rightQueue, int value) {

    node_t *link = (node_t *) malloc(sizeof(node_t));
    link->next = NULL;
    link->value = value;

    if (*rightQueue == NULL) {
        *rightQueue = link;
    } else {
        node_t *nodePointer = *rightQueue;

        while (nodePointer->next != NULL) {
            nodePointer = nodePointer->next;
        }
        nodePointer->next = link;
    }

}

int removeFromQueue(int positionInQueues, node_t **queues) {
    if (queues[positionInQueues]) {
        node_t *first = queues[positionInQueues];
        int value = first->value;

        queues[positionInQueues] = first->next;

        free(first);

        return value;
    } else {
        return -1;
    }
}

void printQueueValues(node_t *nodePointer) {
    if (nodePointer != NULL) {
        printf(" %d",nodePointer->value);
        printQueueValues(nodePointer->next);
    }
}

void printAllQueues(node_t **queues, void (*printQueue)(node_t *)) {
    for (int i = 0; i < 10; i++) {
        printf("\nFila %d: ", i);
        printQueue(queues[i]);
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

    printf("\n---------------------------------------------------------\n");

}


void fillListWithRandom(int maxValue, int *array, int length) {
    printf("\nGerando lista aleatória...\n");
    srand((unsigned int) time(NULL));
    for( int i = 0; i < length; i++ ) {
        array[i] = rand() % maxValue;
    }
}

int getMaximumPossibleNumber(int d) {
    int value = 0;
    for (int i = 0; i < d; i++) {
        value += 9 * (int) (pow(10,i) + 0.5);
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
