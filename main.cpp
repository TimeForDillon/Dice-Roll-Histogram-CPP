/*******************************************************************************
 * AUTHOR        : Dillon Welsh, Alex Guevara
 * LAB #2        : Histogram/Arrays
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 8/28/2020
 ******************************************************************************/

#include "header.h"

/*******************************************************************************
 * Histogram of dice rolls
 *______________________________________________________________________________
 * This program will log the outcome of a user input amount of dice rolls
 * and display the distribution of values on a histogram.
 *______________________________________________________________________________
 * INPUTS:
 *  int seedValue: takes in user input value to seed into srand().
 *  int n: takes in user input value of number of rolls.
 *
 * OUTPUTS:
 *  int count[]: stores number of roll values in respective index.
 ******************************************************************************/

int main()
{
    int seedValue;                  // INPUT - value for rand seed
    int n;                          // INPUT - value for number of rolls
    int dice1;                      // CALC - stores roll value of dice
    int dice2;                      // CALC - stores roll value of dice
    int dice3;                      // CALC - stores roll value of dice
    int dice4;                      // CALC - stores roll value of dice
    int countHistory[21]={};        // CALC & OUT - array storing roll results

    // INPUT - user inputs seed value and number of rolls
    cout << "Enter the seed value: ";
    cin >> seedValue;
    cout << endl;
    cout << "Enter the number of Rolls: ";
    cin >> n;
    cout << endl << endl;

    // PROCESSING - seeding user input
    srand(seedValue);

    // PROCESSING - traverses array
    for(int i = 0; i < n ; i++)
    {
        // PROCESSING - add 1 to array with index of the roll sum
        // roll - returns random value between 1 and 6
        dice1 = roll();
        dice2 = roll();
        dice3 = roll();
        dice4 = roll();
        countHistory[((dice1 + dice2 + dice3 + dice4)-4)]+=1;
    }

    // OUTPUT - outputs histogram
    // printHistogram - takes in array with roll values and outputs histogram
    printHistogram(countHistory);
    return 0;
}

