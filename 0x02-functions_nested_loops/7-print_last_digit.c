#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: the given value
 * Return: returns 0 if succcessful 1 if otherwise
 */

int print_last_digit(int a)
{
	int b;
	b = b % 10;

	if (a < 0)
	{
		b = -(b);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
	return (0);
}
