#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = (n - i); j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
