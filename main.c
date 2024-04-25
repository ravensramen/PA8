#include "header.h"
int main()
{

	//Question 1

	char source[] = "Hello World"; 
	int length = get_length(source);
	char* destination = (char*) malloc(sizeof(char) * length);

	int n = 0;
	printf("Enter n value: ");
	scanf("%d", &n);

	printf("\nSource : %s\n", source);


	printf("\nCopying %d chars from source to destination...\n", n);
	destination = my_str_n_cat(destination, source, n);
	printf("Destination : %s\n", destination);

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

	//QUESTION 5

	//unsigned int n = 0;
	//printf("Enter n value: ");
	//scanf("%d", &n);
	//printf("Sum of primes: %d\n", sum_primes(n));

	////QUESTION 6

	//Occurrences characters[10]; 
	//int occurrences = 0;
	//char ch = '\0';
	//char str[50]; //string up to size 50
	//printf("Enter a string:\n");
	//scanf("%s", str);

	//maximum_occurrences(str, characters, &occurrences, &ch);

	//if (occurrences == 1)
	//{
	//	printf("There is no character that appears most frequently.");
	//}
	//else //(occurences>1)
	//{
	//	printf("The most frequent character is %c, with %d occurrences. ", ch, occurrences - 1);

	//}

//BONUS QUESTION

//NOT COMPLETELY DEBUGGED might have some kind of error with stack overflow I believe (I don't entirely get malloc yet..)
//will try to finish later, I just need to study for the final instead lol :P
//
//int** array_value, i, j, rows, cols;
//int max_consect, count = 0; 
//
//printf("Enter the number of rows:\n");
//scanf("%d", &rows);
//
//printf("Enter the number of columns:\n");
//scanf("%d", &cols);
//
//array_value = (int**)malloc(rows * sizeof(int*)); // Allocate dynam. memory for rows
//
////note indexing starts at 0!
//for (i = 0; i < rows; i++)
//{
//	array_value[i] = (int*)malloc(cols * sizeof(int)); // Allocate memory for cols
//
//	for (j = 0; j < cols; j++)
//	{
//		printf("Enter row %d, column %d data:\n", i, j);
//		scanf("%d", &array_value[i][j]); //stores value in proper array row and column
//	}
//}
//		printf("\n");
//		max_consect = array_value[0][0]; //initialize array max
//
//		max_consecutive_integer(array_value, rows, cols, &max_consect, &count); //sends array to function and indirectly returns integers corresponding to the most frequent value and frequency
//
//		printf("Max consecutive number is %d\n", max_consect);
//		printf("With a length of %d\n", count);

	return 0;

}
