#include<unistd.h>
/**
 * main - main function
 *
 * Return: Always 1
 */
int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buf, 59);
	return (1);
}
