#include <iostream>
#include <stdio.h>

int main()
{
    int m[15], i;
    char b[] = "3000";

    // Taking input for array m
    for (i = 0; i < 15; i++)
    {
        printf("ENTER THE VALUE %d: ", i + 1);
        scanf("%d", &m[i]);
    }

    // Printing elements of array m
    printf("Elements of array m: ");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", m[i]);
    }

    // Changing the value of the 8th element to 3000
    m[7] = atoi(b);

    // Printing elements of array m after the change
    printf("\nElements of array m (after change): ");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", m[i]);
    }

    return 0;
}
