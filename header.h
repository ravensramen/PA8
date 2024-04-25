//Name: Sydnee Boothby
//Class: CptS 121
//Assignment: PA8
//Due Date: 04/24
//Instructor: Andy O'Fallon
//TA: Claire Monsoon
//Description: This program includes common interview-like c programming questions including programmin techniques and functions learned thus far in cpts121.  

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //not used in 1

char* my_str_n_cat(char* destination, char* source, int n);
//Description: Concatenates string without string library function. 
//Parameters: Destination and source string, number of characters to concatenate. 
//Return: Returns concatenated string.

int get_length(char* source);
//Description: Determines the length of the source string.
//Parameters: Source string.
//Return: Integer coresponding to string length.

int binary_search(int list[], int n, int target);
//Description: Basic binary search function.
//Parameters: List array, number of values, target value. 
//Return: If value was found or not. 

void bubble_sort(char* strings[], int n);
//Description: Basic bubble sort. 
//Parameters: String of characters, size of string.
//Return: Sorted string. 

int is_palindrome(char* string, int length);
//Description: Determines if string is a palindrome or not. 
//Parameters: String, length. 
//Return: Integer coresponding to whether or not string is a palindrome. 

int sum_primes(unsigned int n);
//Description: Recursively determines the sum of primes from 2 to n.
//Parameters: User inputted integer n. 
//Return: Sum of primes. 

int is_prime(unsigned int num, unsigned int divisor);
//Description: Recursively determines if number is a prime or not. 
//Parameters: Number, divisor of number.
//Return: Whether or not number is prime. 

typedef struct occurrences
{
	int num_occurrences;
	double frequency;
} Occurrences;
//Description: Struct for max character occurence and it's coresponding frequency. 


void maximum_occurrences(char* string, Occurrences struct_ptr[], int* ptr, char* c_ptr);
//Description: User-inputted string, struct to record max occurence and frequency, pointer to character and frequency
//Parameters: Pointer to string, max occurence and frequency pointers. 
//Return: Most frequent character + its frequency. 

//BONUS
void max_consecutive_integer(int** arr, int rows, int cols, int* max_consec, int* count);
//Description: 2D array storing integers, determines what value occurs most. 
//Parameters: 2D array, num rows and columns, pointer to most frequent int and its frequency
//Return: Most frequent int and it's frequency. 

