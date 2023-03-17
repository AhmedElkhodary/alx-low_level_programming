#include <stdio.h>
/**
 * main -  prints numbers from 0 to 9
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 48 + 9; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar ('\n');
	return (0);
}

