#include "header.h"

/*******************************************************************************
 * FUNCTION roll
 * _____________________________________________________________________________
 * This function doesn't take in any variables. This function produces a
 *  random number between 1 and 6 and returns the value as an int.
 *  - returns int holding random number.
 * _____________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously define values:
 *     N/A.
 *
 * POST-CONDITIONS
 *     Returns diceRoll holding random value between 1 and 6.
 ******************************************************************************/

int roll()
{
    int diceRoll;   // CALC - holds random value for dice roll

    // PROCESSING - calculates random number between 1 and 6
    diceRoll = rand()%6+1;
    return diceRoll;
}

/*******************************************************************************
 * printHistogram
 * This function takes in an array that is holding the roll values in the
 *  respective indicies and outputs them on a histogram. This function
 *  returns nothing becuase its a void output function.
 *  - returns nothing. outputs histogram.
 * PRE-CONDITIONS
 *  The following need previously define values:
 *      counts[]: Array holding roll values.
 *
 * POST-CONDITIONS
 *      N/A. Outputs histogram.
 ******************************************************************************/

void printHistogram(int counts[])   //IN - array holding roll values
{
    // PROCESSING - goes through every element of passed array
    for(int i=0;i<21;i++)
    {
        // PROCESSING & OUTPUT - formatting
        if(i+4<10) cout << i+4 << " : ";
        else cout << i+4 << ": ";
        //PROCESSING & OUTPUT - outputs i num of Xs for value in ea array index
        for(int j=0;j<counts[i];j++)
        {
            cout << "X";
        }
        cout << endl;
    }
}
