#include"main.h"
/**
 * *_strcpy - copy paste string
 * @dest: destination value
 * @src: source value
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(scr + inc) != '\0')
{
	*(dest + inc) = *(scr + inc);
		inc++;
}
	*(dest + inc) = '\0';
	return (dest);
}
