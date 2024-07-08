#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry pount
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}
