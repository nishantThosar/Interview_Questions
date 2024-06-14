/*Write a program for counting the number of every character of a given text file.*/

#include <stdio.h>
#include <ctype.h>

#define MAX_CHARACTERS 256
#define FILENAME "Char_cout.txt"
int main() 
{
    FILE *fptr;
    char ch;
    int char_counts[MAX_CHARACTERS] = {0};
    
    
    fptr = fopen(FILENAME, "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }//if ends

    printf("Character counts:\n");

    while ((ch = fgetc(fptr)) != EOF)
    {
        char_counts[ch]++;// Increment count for the current character.
    }

    for (int i = 0; i < MAX_CHARACTERS; i++) 
    {
        if (char_counts[i] > 0) // Print only characters that have occurred at least once
        {
            printf("%c: %d\n", (isprint(i)) ? i : '?', char_counts[i]); //is print checks if the char is printable on screen or not.
        }//if ends
    }//for ends

    fclose(fptr);
    return 0;
}//main
