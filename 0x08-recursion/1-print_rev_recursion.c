#include "main.h"

/**
 * void _print_rev_recursion - prints a string in inverse
 * s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
