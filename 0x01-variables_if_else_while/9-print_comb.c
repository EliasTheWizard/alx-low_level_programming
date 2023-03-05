#include <stdio.h>

/**
 * main - Entry point. Print Numbers in CSV
 *
 * Return: 0 success
 */
int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		putchar(',');
		putchar(' ');
		numbers++;
		break;
	}
	putchar('\n');

	return (0);
}
