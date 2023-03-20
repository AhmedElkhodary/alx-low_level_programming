#include<stdio.h>
/**
 * main - pritn digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, m;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				m = 0;
				while (m <= 9)
				{
					if ((i * 10) + j < (k * 10) + m)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(k + 48);
						putchar(m + 48);
						if (i == 9 && j == 8 && k == 9 && m == 9)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					m++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
