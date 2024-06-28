#include "main.h"
/**
 * _isupper - detect upercase alphabets
 * @c: input character
 * Return: (1) for true an (0) or false
 */
int _isupper(int c) 
{
	if(c >= 'A' && c <= 'Z') 
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
