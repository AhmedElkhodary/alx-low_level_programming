#include <stdio.h>
/**
 * main -  prints all number of base 16
 *
 * Return: return 0
 */
int main(void)
{
	char ch;

	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);
	putchar ('\n');
	return (0);
}

