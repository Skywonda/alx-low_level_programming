#include <stdio.h>
/*
 * main - return all alphabets in lowercase  except q and e
 * Return: always return 0 (sucess)
 */

int main(void)
{
	char a= 'a';
	while (a <= 'z')
		if (a != 'q' && a != 'e')
			a++;
		putchar(a);
	putchar('\n');
	return (0)
}
