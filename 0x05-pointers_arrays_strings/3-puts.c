#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * followed by a new line
 * Return: return void
 */

void _puts(char *str)
{
	int i;

	for (i =0; i != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
