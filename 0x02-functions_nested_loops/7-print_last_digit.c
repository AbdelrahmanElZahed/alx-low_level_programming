#include "main.h"
/**
 * print_last_digit- Prints the last digit of a number
 * @i: the number to be printed
 * Return: Value of the last digit of a number
 */
int print_last_digit(int i){
	int LastDigit;
	LastDigit = i % 10;
	if (LastDigit < 0){
		LastDigit = LastDigit*-1;
	}
	_putchar(LastDigit + '0');
	return(LastDigit);
}
