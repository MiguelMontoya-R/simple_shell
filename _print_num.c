#include "holberton.h"

/**
 * _print_num - This function is print number
 *
 * @n: number to printer
 * Return: Description of the returned value
 */

void _print_num(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (n / 10)
	{
		_print_num(num / 10);
	}
	_putchar(num % 10 + '0');
}
