#include <stdio.h>   
#include <stdlib.h>
#include <time.h>
/**
 * main
 * return (0) (sucees)
 */
   
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("The last digit of %d is greater than 5\n", n)
	else if (n == 0)
		printf("The last digit of %d is 0\n", n)
	else if (n < 6) && (!= 0)
		printf("The last digit of %d is less than 6 and not 0\n", n)
	return (0);
}
