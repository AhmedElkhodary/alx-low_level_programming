#include "main.h"
/**
 * main - print(_putchar) followed by a new line
 *
 * Return: on success 1
 */
int main(void)
{
	int i;

	char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
