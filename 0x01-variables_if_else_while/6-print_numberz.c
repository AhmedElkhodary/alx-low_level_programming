#include <stdio.h>
/**
 * main -  prints numbers from 0 to 9
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	putchar ('\n');
	return (0);
}

