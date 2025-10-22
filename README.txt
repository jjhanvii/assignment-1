Firstly, to use these functions, we will import our header files along with the standard input-output header file, using the following syntax(in the beginning of main.c):
SYNTAX:
 	#include <stdio.h>
 	#include "mylib.h"
 	#include "arraylib.h"

Further, "mylib.h" contains the following functions:
1.int isArmstrong(int num):
This function checks if a number is Armstrong. It prints "Armstrong" if the number is Armstrong and "Not Armstrong" otherwise. It returns 0.
2.int isAdams(int num):
This function checks if a number is Adams number. It prints "Adams number" if the number is Adams number and "Not Adams number" otherwise. It returns 0.
3.int isPrimePalindrome(int num):
This function checks if a number is Prime and Palindrome. It prints "PrimePalindrome" if the number is Prime and Palindrome and "Not PrimePalindrome" otherwise. It returns 0.

Further, "arraylib.h" contains the following functions:
1.int findMaxIndex(int arr[], int size):
Finds maximum number from an array of integers. Returns the found integer.
2.int findMinIndex(int arr[], int size):
Finds minimum number from an array of integers. Returns the found integer.
3.float findAverage(int arr[], int size:
Finds average of numbers of an array of integers. Returns the calculated average(in float).
4.void displayArray(int arr[], int size):
Displays the elements of an integer array, in the following format: {1,2,3,..,}. Returns nothing.
5.void reverseArray(int arr[], int size):
Prints the reversed array in format already mentioned. Returns nothing.
6.void sortArray(int arr[], int size):
Sorts the array in ascending order. Returns nothing.
7.int linearSearch(int arr[], int size, int value):
Returns index of the value if found, otherwise it will return -1.

In the end we will use do-while loops to give user the options to use functions from both header files. Further giving the user the choice to choose which function to use along with the provision to exit the loop(in main.c).