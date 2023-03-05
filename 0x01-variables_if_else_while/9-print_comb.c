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

		if (numbers == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		numbers++;
	}
	putchar('\n');

	return (0);
}
