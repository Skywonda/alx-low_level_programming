#include "main.h"
/**
 * _puts - prints a string
 * followed by a new line
 * Return: return void
 */

void _puts(char *str)
{
	for (i =0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
