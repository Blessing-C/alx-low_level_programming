#include <main.h>
/**
 * _memset - fills the first n bytes of the memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
