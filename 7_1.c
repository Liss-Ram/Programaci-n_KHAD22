/*
 ============================================================================
 Name        : 7_1.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
     int marks[10], i, n, sum = 0, suma;
     printf("Ingresa numero de elementos del arreglo : ");
     scanf("%d", &n);
     for(i=0; i<n; ++i)
     {
          printf("Ingresa numero %d: ",i+1);
          scanf("%d", &marks[i]);
          sum += marks[i];
     }
     suma  = sum;

     printf("Suma de los elementos = %d );

     return 0;
}
