#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	/* keeps the number of letters needed to write the word _putchar*/
	char Word[] = "_putchar";
	int W_count = 0;

	while (W_count < 8)
	{
		_putchar(Word[W_count]);
		W_count++;
	}

	_putchar('\n');

	return (0);
}
