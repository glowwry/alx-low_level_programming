#include <stdio.h>
/**
 * main-program entry point
 * Return: zero for no error and non zero for error
 **/
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
