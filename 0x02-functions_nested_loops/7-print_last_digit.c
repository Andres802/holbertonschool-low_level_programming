#include "holberton.h"
/**
 *print_last_digit - a function that prints last digit number
 *@nld: number's last digit result
 *Return: the value of the last digit
 */
int print_last_digit(int nld)
{
	int n, lastDigit;

		lastDigit = (nld % 10);

	if (lastDigit < 0)
	{
		lastDigit = (lastDigit * -1);
	}
	_putchar (lastDigit + '0');
		return (lastDigit);
}
