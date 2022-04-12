#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 * followed by a new line
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int num;
	char a;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
