#include "main.h"

/**
 * print_line - print line (___)
 *
 *@n: number of (_)
 *
 * Return: no return
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
