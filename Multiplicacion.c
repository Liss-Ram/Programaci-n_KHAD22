/*
 ============================================================================
 Name        : Multiplicacion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "Multiplicacion.h"

int main() {
    int a,b, resultado;
     printf("Ingrese un numero: \n");
     scanf("%d", &a);
     printf("Ingrese otro numero: \n");
     scanf("%d", &b);
     resultado=multiplicacion(a,b);
     printf("La multiplicacion es: %d \n", resultado);
     return 0;
}
