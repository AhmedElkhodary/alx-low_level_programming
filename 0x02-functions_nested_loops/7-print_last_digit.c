#include "main.h"
/**
 * print_last_digit - print the last digit of given number
 *
 * @n: number that input to calculate
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else if (n < 0)
	{
		_putchar('0' + (-(n % 10)));
		return (-(n % 10));
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
