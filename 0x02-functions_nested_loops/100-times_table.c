#include"main.h"

/**
 * print_times_table - print out the multiplication table of n
 *
 * @n: takes number input
 *
 *Return : 0 void
 */

void print_times_table(int n)
{
	int product, multiplier, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * multiplier;

				if (product <= 9)
        {
            _putchar(' ');
        }
				if (product <= 99)
        {
            _putchar(' ');
        }

				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
        else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
