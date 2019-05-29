/*
 * Fibonacci.h
 *
 *  Created on: 11 abr. 2019
 *      Author: laptop01
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

//sin recursion
int fibonacci(int n)
{
  int a = 0, b = 1, siguiente, c;

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
        siguiente = c;
    else
    {
        siguiente = a + b;
      a = b;
      b = siguiente;
    }
    printf("%d\n", siguiente);
  }

  return 0;
}

//conrecursion

#endif /* FIBONACCI_H_ */
