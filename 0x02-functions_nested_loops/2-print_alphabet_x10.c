#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case 10 times
 *
 * Return: the alphabet
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
