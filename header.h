#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

/*******************************************************************************
 * roll
 * This function doesn't take in any variables. This function produces a
 *  random number between 1 and 6 and returns the value as an int.
 *  - returns int holding random number.
 ******************************************************************************/

int roll();

/*******************************************************************************
 * printHistogram
 * This function takes in an array that is holding the roll values in the
 *  respective indicies and outputs them on a histogram. This function
 *  returns nothing becuase its a void output function.
 *  - returns nothing. outputs histogram.
 ******************************************************************************/

void printHistogram(int counts[]);   //IN - array holding roll values

#endif // HEADER_H
