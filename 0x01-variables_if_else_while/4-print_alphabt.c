#include <stdio.h>
/**
 * main - Return all alphabets in lowercase  except q and e
 * followed by a new line
 * Return: always return 0 (sucess)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
