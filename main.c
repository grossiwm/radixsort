#include "functions.h"

int main()
{

    presentation();

    int n;
    int d;

    printf("\nInsira o número de elementos a serem gerados para a lista: ");
    scanf("%d", &n);

    printf("\nInsira o número de casas decimais máximas desses números: ");
    scanf("%d", &d);

    int *list = (int *) malloc(sizeof(int)*n);
    fillListWithRandom(getMaximumPossibleNumber(d), list, n);

    printf("\nLista não ordenada: ");
    printArray(list, n);

    printf("\nLista ordenada: ");

    radixSort(list, n);
    printArray(list, n);

    return 0;
}