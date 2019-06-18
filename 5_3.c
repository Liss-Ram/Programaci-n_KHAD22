/*
 ============================================================================
 Name        : Fibonacci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Fibonacci.h"

int main() {
    int n;
    printf("Ingrese el número de términos");
    scanf("%d", &n);

    printf("Los %d términos de la serie Fibonacci son:\n", n);
    fibonacci(n);

	return 0;
}
