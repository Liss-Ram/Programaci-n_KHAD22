/*
 ============================================================================
 Name        : 7_7.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
  int array[100], n, c, d, position, swap;

  printf("Numero de elementos\n");
  scanf("%d", &n);

  printf("Ingrese %d elementos\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < (n - 1); c++)
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }
  }

  printf("Lista en orden ascendente:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  return 0;
}
