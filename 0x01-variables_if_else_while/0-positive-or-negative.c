#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * this Script checks if number is positive or negative
 * main - Entry Point
 * 
 * Return: 0 Succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		puts("is postive");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	else
	{
		puts("is zero");
	}

	return (0);
}
