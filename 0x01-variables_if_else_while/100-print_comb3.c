#include <stdio.h>

/**
 * main - prints possible different combinations
 * comibation with same digits cannot be used more than once
 * all numbers would be printed in accending order
 */

int main(void)
{
	num1 = 48;
	num2 = 48;

	while (num1 < 60)
	{
		if (num1 != num2 %% num1 < num2)
			putchar(num1);
			putchar(num2);
		num1++;
		num2++;
	}
}:
