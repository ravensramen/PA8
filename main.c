
//fix alphabet issue
#include "header.h"
int main()
{

	//Question 1

	//char source[] = "Hello World"; 
	//int length = get_length(source);
	//char* destination = (char*) malloc(sizeof(char) * length);

	//int n = 0;
	//printf("Enter n value: ");
	//scanf("%d", &n);

	//printf("\nSource : %s\n", source);


	//printf("\nCopying %d chars from source to destination...\n", n);
	//destination = my_str_n_cat(destination, source, n);
	//printf("Destination : %s\n", destination);

	//Question 2

	//int list[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; //modifyable list, must be ordered
	//int n = sizeof(list) / sizeof(list[0]);  //calculate array size
	//int target = 13; //modifyable target value

	//int result = binary_search(list, n, target);

	//if (result != -1) {
	//	printf("Target value %d found at index %d.\n", target, result);
	//}
	//else {
	//	printf("Target value %d not found in the list.\n", target);
	//}

	//Question 3

	//char* strings[] = { "banana", "apple", "orange", "grape", "pineapple" };
	//int n = sizeof(strings) / sizeof(strings[0]); // calculate number of strings

	//printf("Before sorting:\n");
	//for (int i = 0; i < n; i++) {
	//	printf("%s ", strings[i]); // prints the unsorted strings
	//}
	//printf("\n");

	//bubble_sort(strings, n); //sends strings to function

	//printf("After sorting:\n");
	//for (int i = 0; i < n; i++) {
	//	printf("%s ", strings[i]);
	//}
	//printf("\n");

	////QUESTION 4

	//char string[] = "racecar"; //string to be modified
	//int length = 0;
	//length = get_length(string);
	//int result = '\0';

	//result = is_palindrome(string, length);

	//if (result == 1)
	//{
	//	printf("String is a palindrome.\n");
	//}
	//if (result == 0) 
	//{
	//	printf("String is not a palindrome. \n");
	//}

	//return 0;

	//QUESTION 5

	//unsigned int n = 0;
	//printf("Enter n value: ");
	//scanf("%d", &n);
	//printf("Sum of primes: %d\n", sum_primes(n));

	//QUESTION 6

	 //stores data for all 26 letters
	Occurrences characters[26]; //for each alpha letter
	int return_value = 0;
	char ch[2]; //returns highest frequency
	char str[50]; //string up to size 50
	printf("Enter a string:\n");
	scanf("%s", str);
	//fgets(str, 50, stdin); //can replace stdin with a file
	// 
	// 
	//for debug
	int max = 0;

	max = maximum_occurrences(str, characters, &return_value, ch);

	printf("%d", max);

	return 0;

}
