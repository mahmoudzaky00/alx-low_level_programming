#include "main.h"

/**
 * print_square - print a square using thee character #
 *
 * @size: is the size of square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; coumn++)
			_putchar('#');
		-putchar('\n');
	}
}
