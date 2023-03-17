#include <stdio.h>
/**
 * main -  prints numbers from 0 to 9
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar ('\n');
	return (0);
}

