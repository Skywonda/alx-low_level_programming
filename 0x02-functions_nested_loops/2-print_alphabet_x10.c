#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char a;

		for (a = 'a'; a < 'z'; a++)
		{
			_putchar(a);
		}
		counter++;
		putchar('\n');
	}
}
