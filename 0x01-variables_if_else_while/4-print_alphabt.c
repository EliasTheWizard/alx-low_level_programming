#include <stdio.h>

/**
 * main - Entry Point, Print alphabet save 'q' & 'e'
 *
 * Return: 0 success
 */
int main(void)
{
	int asci = 97;

	while (asci >= 97 && asci <= 122)
	{
		putchar(asci);
		asci++;
	}
	putchar('\n');

	return (0);
}
