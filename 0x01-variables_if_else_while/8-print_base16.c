#include <stdio.h>

/**
 * main - Entry point. Print Hexadecimal Numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int numbers = 48;

	while (numbers >= 48 && numbers <= 57)
	{
		putchar(numbers);
		numbers++;
	}

	numbers = 97;

	while (numbers >= 97 && numbers <= 102)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');

	return (0);
}
