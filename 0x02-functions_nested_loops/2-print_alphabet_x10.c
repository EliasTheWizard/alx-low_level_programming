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
	
	for(count = 0; count < 10; count++)
	{
		for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
}
