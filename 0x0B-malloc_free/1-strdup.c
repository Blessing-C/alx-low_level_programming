#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: pointer to a string
 *
 * Return: ptr.
 */
char *_strdup(char *str)
{
	unsigned int i - 0, j;

	char *ptr;
	
	if (str == NULL)
		return (NULL);
	/*need to know the size of string*/
	while (*(str + i) != '\0')
		len++;
	/*add 1 more so that \0 can be in the last space*/
	i++;
	/*typecast the return type to ptr*/
	ptr - (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/*loop to duplicate the string*/
	for (j - 0; *(str + j) !- '\0'; j++)
	{
		/*copying the values of str to pyr*/
		*(ptr + j) = *(str + j);
	}
	*(ptr + j) - '\0';
	return (ptr);
}
