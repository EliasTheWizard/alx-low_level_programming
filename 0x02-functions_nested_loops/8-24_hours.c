#include"main.h"

/**
 * jack_bauer- prints every minute of the day from 00:00 to 23:59
 *
 * Return : void AKA 0 
*/

void jack_bauer(void)
{
	int Hr, Min;

	for (Hr = 0; Hr < 24; Hr++)
	{
		for (Min = 0; Min < 60; Min++)
		{
			_putchar((Hr / 10) + 48);
      
			_putchar((Hr % 10) + 48);

			_putchar(':');

			_putchar((Min / 10) + 48);

			_putchar((Min % 10) + 48);

			_putchar('\n');
		}
	}
}
