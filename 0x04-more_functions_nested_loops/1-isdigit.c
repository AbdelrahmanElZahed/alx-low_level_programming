#include "main.h"
/**
 * _isdigit - cheeck if parameter is a digit or a character
 * @@c:parameter
 * Return: 1 if it is a number and o otherwise
 */
int _isdigit(int c){
	if (c >= 48 && c <= 57){
		return (1);
	}
	else{
		return (0);
	}
}

