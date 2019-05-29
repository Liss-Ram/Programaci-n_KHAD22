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

     printf("Suma de los elementos = %d", suma);

     return 0;
}

