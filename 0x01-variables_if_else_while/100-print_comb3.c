#include <stdio.h>

/**
 * main - function that prints combination of two numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
