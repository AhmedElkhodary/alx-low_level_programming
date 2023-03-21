#include "main.h"
/**
 * _isalpha - checks for lowercase character
 *
 * @c: Nubmer Ascii code for some character
 *
 * Return: 1 (is alphbet)   0 (is not alphabet)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
