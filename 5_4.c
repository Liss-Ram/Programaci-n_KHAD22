/*
 ============================================================================
 Name        : MCD.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include "MCD.h"

int main() {
int a,b,resultado;
printf("Programa que calcula el Maximo Comun divisor de 2 números:\n");
printf("Introduce el primer numero: ");
scanf("%d",&a);
printf("Introduce el segundo numero: ");
scanf("%d",&b);
resultado=mcd(a,b);
printf("El maximo comun divisor es: %d\n" , resultado);
return 0;


}
