#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet, in lowercase 10times
 *
 * Return: 0 success!!
 */
void print_alphabet_x10(void)
{
	int i, x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
