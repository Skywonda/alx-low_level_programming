#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string of any sets of a bytes
 * @s: String
 * @accept: unknown
 * Return: Returns char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
