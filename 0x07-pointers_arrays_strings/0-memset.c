#include <main.h>
/**
 * _memset - fills the first n bytes of the memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s = i) = b;
		i++;
	}
	return (s);
}
