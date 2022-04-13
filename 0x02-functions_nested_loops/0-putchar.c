#include "main.h"

/**
 * main - prints putchar
 * followed by a new line
 * Return: Always return 0 (success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
