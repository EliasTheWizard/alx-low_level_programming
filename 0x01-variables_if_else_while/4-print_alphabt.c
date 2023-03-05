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
		if (asci != 101 && asci != 113)
		{
			continue;
			putchar(asci);
		}
		asci++;
	}
	putchar('\n');

	return (0);
}
