/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int str, str2;

	str = 0;
	/*find the size of dest array*/
	while (dest[str])
		str++;

	/* iterate through each src array value without the null byte*/
	for (str2 = 0; src[str2] ; str2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[str++] = src[str2];

	return (dest);
}
