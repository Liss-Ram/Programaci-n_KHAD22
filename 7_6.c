/*
 ============================================================================
 Name        : 7_6.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int array[100], minimum, size, c, location = 1;

    printf("Ingresa la cantidad de elementos del arreglo\n");
    scanf("%d", &size);

    printf("Ingresa %d los elementos\n", size);

    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    minimum = array[0];

    for (c = 1; c < size; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
           location = c+1;
        }
    }

    printf("El elemento minimo del arreglo se encuentre en la posicion %d con un valor de %d.\n", location, minimum);
    return 0;
}

