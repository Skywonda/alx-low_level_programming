#include "main.h"
/**
 * _puts - prints a string
 * str - function parameter
 * followed by a new line
 * Return: return void
 */

void _puts(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
