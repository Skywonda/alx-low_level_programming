#include <stdio.h>

/**
 * main - prints the alphabets in a reverse pattern
 * followed by a new line
 * Return: Always return 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
