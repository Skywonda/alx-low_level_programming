#include <stdio.h>

/**
 * main - prints the alphabets in a reverse pattern
 * followed by a new line
 * Return: Always return success (0)
 */

int main(void)
{
	char a;
	
	for (a = 'z'; a >= 'z'; a++)
		puchar(a);
	putchar('\n');
	return (0);
}
