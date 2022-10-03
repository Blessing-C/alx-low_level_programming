#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: the content of the array
 *
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *arraycpy;
	unsigned int counter;
	unsigned int limiter;

	if (str == NULL)
		return (NULL);
	for (counter = 0; str[counter] != '\0'; counter++)
	{}
	counter++;
	arraycpy = malloc(counter * sizeof(char));
	if (arraycpy == NULL)
		return (NULL);
	limiter = counter;
	for (counter = 0; counter < limiter; counter++)
	{
		*(arraycpy + counter) = *(str + counter);
	}
	return (arraycpy);
}
