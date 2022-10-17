#include <stdio.h>
/**
 * main-program that prints out the alphabetes
 * Return: positive if no error and negative if otherwise
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
