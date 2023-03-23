#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 success
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 60 * 24; i++)
	{
		_putchar('0' + (i / 60) / 10);
		_putchar('0' + (i / 60) % 10);
		_putchar(':');
		_putchar('0' + (i % 60) / 10);
		_putchar('0' + (i % 60) % 10);
		_putchar('\n');
	}
}
