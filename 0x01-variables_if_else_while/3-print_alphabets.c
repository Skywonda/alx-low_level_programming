#include <stdio.h>

/**
 * main - main function return all alphabets both in upper and lowercase
 * followed by a new line
 * Return: Always return 0 (suceess)
 */

int main(void)

{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; a <= 'Z'; a++)
		putchar(b);

	putchar ('\n');
	return (0);
}
