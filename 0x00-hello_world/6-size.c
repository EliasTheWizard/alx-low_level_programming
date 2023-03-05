#include<stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Size_char = sizeof(char);

	int Size_int = sizeof(int);

	int Size_long = sizeof(long int);

	int Size_Long = sizeof(long long int);

	int Size_float = sizeof(float);

	printf("size of a char: %lu byte(s)\n", Size_char);

	printf("size of an int: %lu byte(s)\n", Size_int);

	printf("size of a long int: %lu byte(s)\n", Size_long);

	printf("size of a long long int: %lu byte(s)\n", Size_Long);

	printf("size of a float: %lu byte(s)\n", Size_float);

	return (0);
}
