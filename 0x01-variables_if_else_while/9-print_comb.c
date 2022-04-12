#include <stdio.h>

/**
 * main - prints all possible combination of a single digit
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + ',');
	return (0);
}
