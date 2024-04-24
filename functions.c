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


int get_length(char* source)
{
    int i = 0;
    while (source[i] != '\0')
    {
        i++;
    }
    return i;
}

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

        if (!swapped) { //check, not changed from bool og MEOWMEOWMEOW
            // If no swaps occurred in this pass, the list is already sorted
            break;
        }

        unsorted--;
    }
}

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

int maximum_occurrences(char* string, Occurrences* struct_ptr, int* ptr, char* c_ptr)
{
    int i = 0, index = 0, frequency = 0;
    char c = *(string + i);//character found at each index value of the string

    char* alphabets = "abcdefghijklmnopqrstuvwxyz";

    while (c != '\0') //while not at the end of the string
    {
        switch (c)
        {
        case 'a':
        case 'A':
            struct_ptr->frequency++; //increments frequency of letter
            break;
        case 'b':
        case 'B':
            (struct_ptr + 1)->frequency++;
            break;
        case 'c':
        case 'C':
            (struct_ptr + 2)->frequency++;
            break;
        case 'd':
        case 'D':
            (struct_ptr + 3)->frequency++;
            break;
        case 'e':
        case 'E':
            (struct_ptr + 4)->frequency++;
            break;
        case 'f':
        case 'F':
            (struct_ptr + 5)->frequency++;
            break;
        case 'g':
        case 'G':
            (struct_ptr + 6)->frequency++;
            break;
        case 'h':
        case 'H':
            (struct_ptr + 7)->frequency++;
            break;
        case 'i':
        case 'I':
            (struct_ptr + 8)->frequency++;
            break;
        case 'j':
        case 'J':
            (struct_ptr + 9)->frequency++;
            break;
        case 'k':
        case 'K':
            (struct_ptr + 9)->frequency++;
            break;
        case 'l':
        case 'L':
            (struct_ptr + 11)->frequency++;
            break;

        case 'm':
        case 'M':
            (struct_ptr + 11)->frequency++;
            break;

        case 'n':
        case 'N':
            (struct_ptr + 13)->frequency++;
            break;

        case 'o':
        case 'O':
            (struct_ptr + 14)->frequency++;
            break;

        case 'p':
        case 'P':
            (struct_ptr + 15)->frequency++;
            break;

        case 'q':
        case 'Q':
            (struct_ptr + 16)->frequency++;
            break;

        case 'r':
        case 'R':
            (struct_ptr + 17)->frequency++;
            break;

        case 's':
        case 'S':
            (struct_ptr + 18)->frequency++;
            break;

        case 't':
        case 'T':
            (struct_ptr + 19)->frequency++;
            break;

        case 'u':
        case 'U':
            (struct_ptr + 20)->frequency++;
            break;

        case 'v':
        case 'V':
            (struct_ptr + 21)->frequency++;
            break;

        case 'w':
        case 'W':
            (struct_ptr + 22)->frequency++;
            break;

        case 'x':
        case 'X':
            (struct_ptr + 23)->frequency++;
            break;

        case 'y':
        case 'Y':
            (struct_ptr + 24)->frequency++;
            break;

        case 'z':
        case 'Z':
            (struct_ptr + 25)->frequency++;
            break;
        }
        i++;
        c = *(string + i); //go on to next index value
    }
    frequency = struct_ptr->frequency; //access frequency in struct

    for (i = 0; i < 26; i++)
    {
        if (frequency < (struct_ptr + i)->frequency)
        {
            index = i;
            frequency = (struct_ptr + i)->frequency;
        }
    }
    *ptr = frequency; //finds frequency of most occuring letter
    *c_ptr = *(alphabets + index); //dereferences the alphabet character that was found the most amount of times

    return frequency;
}
