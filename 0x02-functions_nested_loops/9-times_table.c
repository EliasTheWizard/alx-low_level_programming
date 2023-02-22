#include"main.h"

/**
 * times_table - prints out the 9 times table
 *
 * Return: 0 on Success
*/

void times_table(void)
{
	int num, multiplier, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');/* formatting to fit example code*/
			_putchar(' ');

			product = num * multiplier;

			if (product <= 9)
				_putchar(' ');/* formatting to fit example code*/
			else
				_putchar((product / 10) + 48);

			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
