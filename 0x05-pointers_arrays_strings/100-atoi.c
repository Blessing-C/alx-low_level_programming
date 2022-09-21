#include "main.h"

/**
 * _atoi - convert strings to integer
 * @s: the string
 *
 * Return: return the value
 */
int _atoi(char *s);
{
	unsigned int saver = 0;
	int sign = 1;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

