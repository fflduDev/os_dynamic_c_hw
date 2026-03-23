/*
 * Template: Dynamic Memory String Reversal
 * 
 * Requirements:
 * - Prompt user for a string (max 100 characters)
 * - Use malloc() to allocate memory for reversed copy
 * - Calculate size using strlen() (remember +1 for null terminator!)
 * - Copy original string in reverse order
 * - Print both original and reversed strings
 * - Free allocated memory before exit
 * - Handle empty strings gracefully
 * 
 * Example Output:
 *   Enter a string: hello
 *   Original: hello
 *   Reversed: olleh
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    char *reversed;
    int len;
    
    // TODO: Step 1 - Prompt user and get input
    // Hint: Use fgets() to read input safely
    printf("Enter a string: ");
    
    
    // TODO: Step 2 - Remove newline character if present
    // Hint: fgets() includes the newline, need to remove it
    // Hint: Use strcspn(input, "\n") to find newline position
    
    
    // TODO: Step 3 - Calculate length of string
    // Hint: Use strlen()
    
    
    // TODO: Step 4 - Allocate memory for reversed string
    // Hint: Need len + 1 bytes (extra 1 for null terminator '\0')
    // Hint: reversed = (char *)malloc(...);
    
    
    // TODO: Step 5 - Check if malloc succeeded
    // Hint: If malloc fails, it returns NULL
    
    
    // TODO: Step 6 - Reverse the string
    // Hint: Use a loop from i = 0 to i < len
    // Hint: reversed[i] = input[len - 1 - i];
    
    
    // TODO: Step 7 - Add null terminator to end of reversed string
    // Hint: reversed[len] = '\0';
    
    
    // TODO: Step 8 - Print both strings
    printf("Original: %s\n", input);
    
    
    // TODO: Step 9 - Free the allocated memory
    // Hint: Use free()
    
    
    return 0;
}

/*
 * COMPILE: gcc -o string_reverse string_reverse_template.c
 * RUN: ./string_reverse
 * 
 * QUESTIONS TO CONSIDER:
 * 1. Why do we need to allocate len + 1 bytes instead of just len?
 * 2. What happens if we forget to call free()?
 * 3. What happens if malloc() fails and we don't check for NULL?
 * 4. Why use fgets() instead of scanf() for reading strings?
 * 5. What would happen if we tried to free() the input array?
 * 
 * TESTING:
 * - Try with normal strings: "hello", "world"
 * - Try with empty string (just press Enter)
 * - Try with spaces: "Operating Systems"
 * - Try with single character: "a"
 */