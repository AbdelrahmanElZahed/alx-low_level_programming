#include "main.h"
/**
 * puts_recursion - function like puts();
 * @s: Input
 * Return: Always (0) if success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
