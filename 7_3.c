/*
 ============================================================================
 Name        : 7_3.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
   int n, c, d, a[100], b[100];

   printf("Ingrese el numero de elementos del arreglo\n");
   scanf("%d", &n);

   printf("ingrese los elementos\n");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);

   /*
    * Copying elements into array b starting from end of array a
    */

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   /*
    * Copying reversed array into the original.
    * Here we are modifying original array, this is optional.
    */

   for (c = 0; c < n; c++)
      a[c] = b[c];

   printf("el arreglo inverso es\n");

   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);

   return 0;
}
