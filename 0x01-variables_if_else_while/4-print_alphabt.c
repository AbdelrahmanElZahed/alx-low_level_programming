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

	while (i <= 'z')
	{
		if (i == 'q' || i == 'e')
		{
			i += 1;
		}
		else
		{
			putchar(i);
			i += 1;
		}
	}
	putchar('\n');
	return (0);
}
