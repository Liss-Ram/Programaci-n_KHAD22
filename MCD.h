/*
 * MCD.h
 *
 *  Created on: 11 abr. 2019
 *      Author: laptop01
 */

#ifndef MCD_H_
#define MCD_H_

int mcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    else if (b == 0)
       return a;

    // base case
    else if (a == b)
        return a;

    // a is greater
    else if (a > b)
        return mcd(a-b, b);
    return mcd(a, b-a);
}

#endif /* MCD_H_ */
