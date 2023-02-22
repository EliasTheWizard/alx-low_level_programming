#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case
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
