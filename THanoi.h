/*
 * THanoi.h
 *
 *  Created on: 30 abr. 2019
 *      Author: laptop01
 */

#ifndef THANOI_H_
#define THANOI_H_

void T_Hanoi(int n,char o,char d,char aux){

    if(n==1){
        printf("\nMueva el disco 1 de la torre %c a la torre %c ." o ,d);
        return;
            }
    T_Hanoi(n-1,o,aux,d);

    printf("\nMueva el disco %d de la torre %c a la torre %c",n,o,d);
    /*Mover os n-1 discos de B para C usando A como auxiliar*/
    T_Hanoi(n-1,aux,d,o);
}

#endif /* THANOI_H_ */
