#include <stdio.h>
#include "main.h"

/**
 * main - prints all alphabets 10 times
 * followed by a new line
 * Return: always return (0) success
 */

void print_alphabet_x10(void)
{
    int counter = 0;

    while (counter < 10)
    {
        char a;

        for (a = 'a'; a < 'z'; a++)
        {
            putchar(a);
        }
        putchar('\n');
        counter++;
    }
    return (0);
}
