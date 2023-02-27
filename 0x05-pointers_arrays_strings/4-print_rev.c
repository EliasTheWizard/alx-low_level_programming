#include"main.h"

/**
 * print_rev - prints input backwards
 *
 * @s: Variable to take string
 *
 * Return: Void
*/

void print_rev(char *s)
{
	int pos;

	/*get length*/
	for (pos = 0; s[pos] != '\0'; ++pos)
	{
		;
	}

	for (--pos; pos >= 0; --pos)
	{
		_putchar(s[pos]);
	}

	_putchar('\n');
}
