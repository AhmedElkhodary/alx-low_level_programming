#include "main.h"
/**
 * print_alphabet - prints alphabet, in lowercase, followed by a new line
 *
 * Return: 0 success!!
 */
void print_alphabet(void)
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
