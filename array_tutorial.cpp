// Array Tutorial

#include <stdio.h>

void printArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
}

void print2dArray(int array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int array[10];

    array[0] = 1;
    array[2] = 2;
    array[4] = 4;
    array[6] = 6;
    array[8] = 8;

    printArray(array, 10);

    int array2d[3][3];

    array2d[0][0] = 1;
    array2d[0][1] = 2;
    array2d[0][2] = 3;

    printf("\n");
    print2dArray(array2d);
}