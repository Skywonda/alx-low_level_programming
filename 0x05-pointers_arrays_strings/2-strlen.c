#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - return length of a given string
 * @s: is the string itself
 * Return: always return (0)
 */

int _strlen(char *s)
{
	int length;
	length = strlen(*s);
	printf("%d", length);
	return (0);
}
