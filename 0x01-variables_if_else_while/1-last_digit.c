#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("last digit of %d is %d",n, n%10);
	if (n % 10 > 5)
		printf("is greater than 5/n");
	else if (n % 10 == 0 )
		printf("is zero");
	else if (n % 10 < 0 && != 0)
		printf("is less than 6 and not 0");
	return (0);
}
