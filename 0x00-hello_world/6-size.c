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
	int Size_float =sizeof(float);

	printf("size of a char: %d\n",Size_char);

	printf("size of an int: %d\n",Size_int);
	
	printf("size of a long int: %d\n",Size_long);
	
	printf("size of a long long int: %d\n",Size_Long);
	
	printf("size of a float %d\n",Size_float);

	return (0);
}
