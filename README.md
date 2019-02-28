#### CS 120 - Spring 2019
# Lab 5 - Dynamic Memory
## Due Date: In Lab

### Provided Files
* _Files_
    * lab5.c

For lab, you will be working with dynamic memory and arrays in C.

## Part A
 I have provided you with driver code that explains what you must do for each step. All allocated array memory should be on the heap (using malloc). Below is an overview of the steps:
1. Create an integer array of size 20 on the heap, and insert random values
2. Increase the size of your array by allocating space for a new array and copying the values over.
    * :warning: Don’t forget to free the old array.
3. Increase the size of your array by a random amount
4. Reduce the size of the array by half
5. Remove a random element from the array, and shrink the array by one. The resulting array should be exactly like the previous, only missing the removed element.

:bulb: You should print the array after every test. All of your loops (printing or otherwise) should use only pointer arithmetic to iterate through your list.

## Part B - Valgrind

Because C is so flexible, you need to verify that you are using memory properly. Valgrind is a unix memory tool to ensure you are using valid memory (will not work on windows). To get the most out of `valgrind`, you should use the `-g` flag when you compile:

```bash
gcc -g myfile.c -o myprog
```

Once you’ve compiled your code, you can use `valgrind` to verify your memory usage

```bash
valgrind ./myprog
```

Your program will run with additional information. What you are concerned with is the following: lines:

```bash
    HEAP SUMMARY:
    in use at exit: 10 bytes in 1 blocks
    		...
    ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
```

It should say:

```bash
    in use at exit: 0 bytes in 0 blocks
    0 errors.
```

If it says you have errors or leaks, you will have to go back and try to determine what your error is and fix it.

## Part C: Submission

Ask your TA to demo. The TA will ask you to show your answers, and may ask you to explain how you got an answer. After the TA marks you as having completed the lab, you may leave.
