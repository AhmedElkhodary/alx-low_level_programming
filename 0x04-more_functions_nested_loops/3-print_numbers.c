#include "main.h"

/**
 * print_numbers - print numbers from 1 to 9
 *
 *
 * Return: no return
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
