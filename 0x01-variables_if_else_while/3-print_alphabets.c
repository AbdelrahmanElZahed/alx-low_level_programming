#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j += 1;
	}
	putchar('\n');
	return (0);
}
