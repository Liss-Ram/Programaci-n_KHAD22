/*
 ============================================================================
 Name        : T_Hanoi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include"THanoi.h"
int main(){
    int n;
    printf("Ingrese el numero de discos: ");
    scanf("%d",&n);
    printf("\nPara resolver la torre de Hanoi debe :\n\n");
    T_Hanoi(n,'A','C','B');
    printf("\n");
    return 0;
}
//https://gist.github.com/talespadua/6303251
