#include "header.h"

//QUESTION 1


char* my_str_n_cat(char* destination, char* source, int n)
{

    int i = 0;
    while (source[i] != '\0' && i < n)
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return destination;

}
//Description: Concatenates string without string library function. 
//Parameters: Destination and source string, number of characters to concatenate. 
//Return: Returns concatenated string.

int get_length(char* source)
{
    int i = 0;
    while (source[i] != '\0') //while null not reached
    {
        i++;
    }
    return i;
}
//Description: Determines the length of the source string.
//Parameters: Source string.
//Return: Integer coresponding to string length.


//QUESTION 2

int binary_search(int list[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int found = 0;
    int target_index = -1;

    while (!found && left <= right) {
        int mid = left + (right - left) / 2; // Calculate the midpoint

        if (target == list[mid]) {
            found = 1;
            target_index = mid;
        }
        else if (target < list[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return target_index;
}
//Description: Basic binary search function.
//Parameters: List array, number of values, target value. 
//Return: If value was found or not. 

//Question 3

void bubble_sort(char* strings[], int n) {
    int unsorted = n - 1; // Marker for the unsorted section

    while (unsorted > 0) {
        int current = 1; // Marker for the current element
        int swapped = 0; // Flag to track if any swaps occurred in this pass

        while (current <= unsorted) {
            if (strcmp(strings[current], strings[current - 1]) < 0) { //compares strings for first occuring ascii code
                // Swap strings[current] and strings[current - 1]
                char* temp = strings[current];
                strings[current] = strings[current - 1];
                strings[current - 1] = temp;
                swapped = 1;
            }
            current++;
        }

        if (!swapped) {
            // If no swaps occurred in this pass, the list is already sorted
            break;
        }

        unsorted--;
    }
}
//Description: Basic bubble sort. 
//Parameters: String of characters, size of string.
//Return: Sorted string. 

int is_palindrome(char* string, int length) {
    // Base case: if the length is 0 or 1, it's a palindrome
    if (length <= 1)
        return 1;

    // Check if the first and last characters are the same
    if (string[0] == string[length - 1]) {
        // Recursively check the substring excluding the first and last characters
        is_palindrome(string + 1, length - 2);
    }
    else {
        // If the first and last characters are not the same, it's not a palindrome
        return 0;
    }
}
//Description: Determines if string is a palindrome or not. 
//Parameters: String, length. 
//Return: Integer coresponding to whether or not string is a palindrome. 

int sum_primes(unsigned int n)
{
    if (n < 2) {
        return 0; // Base case: return 0 for numbers less than 2
    }
    else {
        if (is_prime(n, n / 2)) {
            return n + sum_primes(n - 1); // Add prime number and recurse for the next number
        }
        else {
            return sum_primes(n - 1); // Recurse for the next number
        }
    }
}
//Description: Recursively determines the sum of primes from 2 to n.
//Parameters: User inputted integer n. 
//Return: Sum of primes. 

int is_prime(unsigned int num, unsigned int divisor) {
    if (divisor == 1) //base case (2)
    {
        return 1;
    }
    else
    {
        if (num % divisor == 0) //checks for largest possible prime factor (2)
        {
            return 0;
        }
        else return is_prime(num, divisor - 1); //keep looking for prime factors at every lower value 
    }
}
//Description: Recursively determines if number is a prime or not. 
//Parameters: Number, divisor of number.
//Return: Whether or not number is prime. 

void maximum_occurrences(char* string, Occurrences struct_ptr[], int* ptr, char* c_ptr)
{
    int count[26] = { 0 }; //stores frequency of each character
    char temp[26] = { '\0' }; //stores the corresponding character

    int next = 0, next_int = 0, c = 0, hold = 0, total = 0;

    while (*string != '\0') //while not at the end of the string
    { 
        for(int i = 0; i<100; i++)
        {
            if(*string==temp[i])
            {
                hold = i;
                c++; 
            }
        
        }
        if(c==0)
        {
            temp[next++] = *string;
        }
        else
        {
            count[hold] += c;
        }
        total++;
        string++;

    }
    for(int i = 0; i<sizeof(struct_ptr)/sizeof(Occurrences); i++)
    {
        if (count[i] != 0) 
        {
            struct_ptr[i].num_occurrences = count[i] + 1;
            struct_ptr[i].frequency = (double)(count[i] + 1) / total;
        }
        else
        {
            struct_ptr[i].num_occurrences = 1;
            struct_ptr[i].frequency = 1.0 / total;
        }
    
    }
    int max = 0, max_index = 0;
    for(int i = 0; i<26; i++)
    {
        if (count[i] > max) 
        {
            max = count[i];
            max_index = i;
        }
    }
    *ptr = max+1;
    *c_ptr = temp[max_index];
}
//Description: User-inputted string, struct to record max occurence and frequency, pointer to character and frequency
//Parameters: Pointer to string, max occurence and frequency pointers. 
//Return: Most frequent character + its frequency. 

//BONUS QUESTION 7
void max_consecutive_integer(int** arr, int rows, int cols, int* max_consec, int* count) 
{
    int i=0, j=0, data_at_index, max_count = 1;
    int counter = 1;

    data_at_index = (int)arr[0][0];


    //loop through each row
    for (i = 0; i < rows; i++)
    {
        if (i == 0)
        {
            j = 1;
        }
        else
        {
            j = 0;
        }
        //loop through each column
        for (; j < cols; j++)
        {
            if (arr[i][j] == data_at_index)//increment if value is repeated
            {
                counter = counter + 1; //increments frequency of number
            }
            else
            {
                if (max_count < counter) //if most frequent value
                {
                    max_count = counter; //set value as most frequent
                    *max_consec = data_at_index; //dereferences to save the most frequent number
                }

                counter = 1; //resets counter
                data_at_index = arr[i][j];

            }
        }

    }
    *count = max_count; //frequency of most frequent number

    //Description: 2D array storing integers, determines what value occurs most. 
    //Parameters: 2D array, num rows and columns, pointer to most frequent int and its frequency
    //Return: Most frequent int and it's frequency. 


}
