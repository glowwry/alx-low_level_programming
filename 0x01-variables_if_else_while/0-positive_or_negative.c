#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Assign random number to variable
 * Return:positive for numbers greater than zero, negative for otherwise
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
