#include "main.h"

/**
 * swap_int - swaps the value of the function parameter
 * @a: first pointer
 * @b: second pointer
 * Return: reuturn void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
