#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints the last digit of the assigned var
 * whether it is greater than 5, less than 6, or 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	}
	else if (o < 6 && o != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, o);
	}
	return (0);
}
