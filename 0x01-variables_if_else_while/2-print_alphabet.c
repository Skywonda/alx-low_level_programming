#include <stdio.h>

/**
 * main - prints the alphabet in  lowercase,
 * followed by a new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
