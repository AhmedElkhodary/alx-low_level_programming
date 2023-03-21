#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: character input to by printed
 *
 * Return: 0 success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
