#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/********************************************************************/
/*    ONLY ALTER WHERE INSTRUCTED				                    */
/********************************************************************/


int main(){
    int i = 0;
    srand(time(NULL));
    printf("\t-----------------------------------\n");
    printf("\t-           Dynamic Arrays        -\n");
    printf("\t-----------------------------------\n");
    printf("\n\t========= After each test you should print our your array using a loop ===========\n\n");
    printf("\n\t========= Your loops should ONLY use pointer arithmetic to iterate ===========\n\n");

    printf("\n\t=========Test #1: Create an integer array of Size 20===========\n\n");
    printf("\n\t=========Test #1: Using a Loop, insert 20 random values into your Array===========\n\n");
    /*
    Example code to create a random value between 1-20: (rand() % 20) + 1
    */

    printf("\n\t=========Test #2: 'Grow' the array by 1, and insert a value at the end ===========\n\n");



    printf("\n\t=========Test #3: Produce a Random Number between 1 and 20, create a new array that is the size of the current array + the random value ===========\n\n");
    printf("\n\t=========Test #3: Copy the values form the old array to the new array===========\n\n");
    printf("\n\t=========Test #3: Fill the remaining indexes in the new array with random values===========\n\n");


    printf("\n\t=========Test #4: Reduce the size of the array by half (use integer division)  ===========\n\n");
    printf("\n\t=========Test #4: You will need to make a new array again ===========\n\n");


    printf("\n\t=========Test #5: Remove a random element from your array ===========\n\n");
    printf("\n\t=========Test #5: The array size should shrink by exactly 1 ===========\n\n");

    printf("\n\t=========Run your code with valgrind to ensure there are no errors ===========\n\n");
    return 0;
}
