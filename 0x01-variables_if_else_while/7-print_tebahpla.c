#include <stdio.h>
/**
 * main-program entry point
 * Return: zero if no error and non zero if error
 **/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
