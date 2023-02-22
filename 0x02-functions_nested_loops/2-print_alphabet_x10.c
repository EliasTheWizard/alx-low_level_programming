#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case 10 times
 *
 * Return: the alphabet
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	alphabet = 'a';
	count = 0;
	
	while (count <= 9)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		count++;
	}
	_putchar('\n');
}
