#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: charater
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return(s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
