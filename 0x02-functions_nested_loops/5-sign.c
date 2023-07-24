#include "main.h"

/**
* print_sign – prints the sign of n
* @n: determines if the input is greater, equal or less then zero
* Return: 1 if greater than zero, 0 is zero, -1 is less then zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(46);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar(‘\n’);
}
