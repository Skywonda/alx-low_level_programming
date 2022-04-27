#include "main.h"

/**
 * memset - fills memory with constant bytes
 * @s: A string
 * @b: bytes
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, umsigned int n)
{
	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
