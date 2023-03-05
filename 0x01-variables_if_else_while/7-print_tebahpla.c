#include <stdio.h>

/**
 * main - Entry Point, Print alphabet in reverse
 *
 * Return: 0 success
 */
int main(void)
{
	int asci = 122;

	while (asci >= 97 && asci <= 122)
	{
		putchar(asci);
		asci--;
	}
	putchar('\n');

	return (0);
}
