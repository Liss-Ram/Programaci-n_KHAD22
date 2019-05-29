/*
 ============================================================================
 Name        : 7_10.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
   int c, first, last, middle, n, search, array[100];

   printf("Introduzca la cantidad de elementos\n");
   scanf("%d",&n);

   printf("Ingrese %d los numeros\n", n);

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   printf("INgrese el valor a buscar\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d se encuentra en la posicion %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("no se pudo encontrar %d no esta en la lista.\n", search);

   return 0;
}
