#include <stdio.h>
/**
 * main-progrsm entry point
 * Return: zero if no error and non zero if error
 **/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

