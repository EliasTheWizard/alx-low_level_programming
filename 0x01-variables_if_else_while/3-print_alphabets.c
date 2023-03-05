#include <stdio.h>

/**
 * main- Entry Point. Print Alphabets
 *
 * Return: 0 Success
 */
int main(void)
{
	int alpha = 97;
	int ALPHA = 65;

	while (alpha >= 97 && alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}

	while (ALPHA >= 65 && ALPHA <= 90)
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');

	return (0);
}
