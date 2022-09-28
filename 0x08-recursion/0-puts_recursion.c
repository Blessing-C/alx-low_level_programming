#include "main.h"

/**
 * _puts_recursion - that prints a string
 * @s: pointer block of memory
 * Return: void
 *
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*(s));
		++s;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
