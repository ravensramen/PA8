#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //not used in 1

char* my_str_n_cat(char* destination, char* source, int n);

int get_length(char* source);

int binary_search(int list[], int n, int target);

void bubble_sort(char* strings[], int n);

int is_palindrome(char* string, int length);

int sum_primes(unsigned int n);

int is_prime(unsigned int num, unsigned int divisor);

typedef struct occurrences
{
	int num_occurrences;
	double frequency;
} Occurrences;

int maximum_occurrences(char* string, Occurrences* struct_ptr, int* ptr, char* c_ptr);
