#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -assign a random number to the variable
 * Description: print the last digit of the number stored in the variable 
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	in = rand() - RAND_MAX / 2;
	if (n > 5);
	{
		printf("%d and is greater that 5/n", n)
	}
	else if (n == 0);
	{
		printf("%d and is 0");
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
