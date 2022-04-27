#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: A string
 * @b: bytes
 * @n: index
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, umsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
