#include <stdio.h>

/**
 * main - print aphabets in lowercase
 * print a new line
 * Return : Always 0 (succes)
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
