#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines number (greater than 5,equal 0 or less than 6 and not 0)
 *
 * Return: return 0
 */

int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	printf("Last digit of %d is %d ", n, num);
	if (num > 5)
		printf("and is greater than 5\n");
	if (num == 0)
		printf("and is 0\n");
	if (num < 6 && num != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
