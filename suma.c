/*
 ============================================================================
 Name        : suma.c
 Author      : A
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include"suma.h"
int main(){
    int a,b, resultado;
    printf("Ingrese un numero: \n");
    scanf("%d", &a);
    printf("Ingrese otro numero: \n");
    scanf("%d", &b);
    resultado=suma(a,b);
    printf("La suma es: %d \n", resultado);
    return 0;
}
