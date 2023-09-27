// Loops Tutorial

#include <stdio.h>

int main()
{

    printf("** For Loop Tutorial **");

    // Print Table of 2
    for (int i = 1; i < 11; i++)
    {
        printf("\n2 * %d = %d", i, 2 * i);
    }

    // Print Even Number
    printf("\nEven Numbers :- ");
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
    }

    // Print Odd Number
    printf("\nOdd  Numbers :- ");
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
    }

    printf("** While Loop Tutorial **");

    // Print Table of 2
    int i = 1;
    while (i < 11)
    {
        printf("\n2 * %d = %d", i, 2 * i);
        i++;
    }

    // Print Even Number
    printf("\nEven Numbers :- ");
    i = 1;
    while (i < 100)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i++;
    }

    // Print Odd Number
    printf("\nOdd Numbers :- ");
    i = 1;
    while (i < 100)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
        i++;
    }

    printf("** Do While Loop Tutorial **");
    // Print Table of 2
    i = 1;
    do
    {
        printf("\n2 * %d = %d", i, 2 * i);
        i++;
    } while (i < 11);

    // Print Even Number
    printf("\nEven Numbers :- ");
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i++;
    } while (i < 100);

    // Print Odd Number
    printf("\nOdd Numbers :- ");
    i = 1;
    do
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
        i++;
    } while (i < 100);
}