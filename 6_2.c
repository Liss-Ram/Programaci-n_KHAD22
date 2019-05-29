/*
 ============================================================================
 Name        : 6_2.c
 Author      : Liss&Karla co.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

long fibonacci( long n ); /* prototipo de la funciÃƒÂ³n */
int main()
{
   long resultado; /* valor fibonacci */
   long numero;    /* numero a introducir por el usuario */

   /* obtiene un entero del usuario */
   printf( "Introduzca un entero: " );
   scanf( "%ld", &numero);

   /* calcula el valor fibonacci del nÃƒÂºmero introducido por el usuario */
   resultado = fibonacci( numero );

   /* despliega el resultado */
   printf( "Fibonacci( %ld ) = %ldn", numero, resultado );

   return 0; /* indica terminaciÃƒÂ³n exitosa */

} /* fin de main */

/* definiciÃƒÂ³n de la funciÃƒÂ³n recursiva fibonacci */
long fibonacci( long n )
{
   /* caso base */
   if ( n == 0 || n == 1 ) {
      return n;
   } /* fin de if */
   else { /* paso recursivo */
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
   } /* fin de else */

} /* fin de la funciÃƒÂ³n fibonacci */
