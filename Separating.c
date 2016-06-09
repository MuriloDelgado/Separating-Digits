#include <stdio.h>

int main()
{
char number[6]; // Separates number between 1 and 32767
size_t x; // Counter

printf("\nEnter a number between 1 and 32767 to be separated: "); // Beginning input for separation
scanf("%6s", number);

printf("\nYour number separated is: ");

for (x = 0; x < 6 && number[ x ] != '\0'; ++x) // Printing out separated number
    {
        printf("%c ", number[ x ]);
    }
}

