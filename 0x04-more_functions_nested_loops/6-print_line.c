#include "main.h"

/**
 * print_line - print a stright line
 *
 * @n: is the number of times the - character
 * should be printed
 */

void print_line(int n)
{
	int inChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChr = 1; inChr <= n; luChr++)
			_putchar('_');
		_putchar('\n');
	}
}
