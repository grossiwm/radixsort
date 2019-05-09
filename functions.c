
#include "functions.h"

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


void countSort(int list[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++) {
        count[ (list[i]/exp)%10 ]++;
    }


    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }


    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (list[i]/exp)%10 ] - 1] = list[i];
        count[ (list[i]/exp)%10 ]--;
    }


    for (i = 0; i < n; i++) {
        list[i] = output[i];
    }

}


void radixSort(int *list, int n)
{
    int largest = getLargest(list, n);


    for (int exp = 1; largest/exp > 0; exp *= 10) {
        countSort(list, n, exp);
    }

}

void fillListWithRandom(int maxValue, int *array, int length) {
    printf("\nGerando lista aleatória...\n");
    srand(time(NULL));
    int r = rand();
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
