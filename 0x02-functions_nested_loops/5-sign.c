#include "main.h"
/**
 * print_sign - checks weather number is (negative,zero or positive)
 *
 * @n: number that input to calculate
 *
 * Return: 0 (zero)  1(positive) -1(negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
