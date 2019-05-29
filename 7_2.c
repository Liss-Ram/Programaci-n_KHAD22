/*
 ============================================================================
 Name        : 7_2.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
  int i;
  int array[9] ={10, 23, 42, 1, 654, 0, 40652, 22, 0};
  for(i = 0; i < 9; i++)
  {

       {
         printf("%d ", array[i]);
       }
    printf("\n");
  }
  return 0;
}
