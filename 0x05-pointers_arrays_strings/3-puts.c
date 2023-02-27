#include"main.h"

/**
 * _puts - prints a string and adds a new line
 *
 * @str: Variable holding string
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
