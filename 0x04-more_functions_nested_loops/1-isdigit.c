#include "main.h"

/**
 * _isdigit - check is digit
 *
 *
 * @c: you should digit
 *
 *
 * Return: 1(digit)  0(otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
