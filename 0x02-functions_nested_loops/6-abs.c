#include "main.h"
/**
 * _abs - culculate absolute value of a number
 *
 * @n: number that input to calculate
 *
 * Return: absolute of (n)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
