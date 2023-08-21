#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using twp input parameters
 *
 * @a: input patameter 1
 * @b: input patameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
