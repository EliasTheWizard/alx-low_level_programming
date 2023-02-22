#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case 10 times
 *
 * Return: the alphabet
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	alphabet = 'a';
	
	for(count = 0; count < 10; count++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		
		_putchar('\n');
		
	}
}
