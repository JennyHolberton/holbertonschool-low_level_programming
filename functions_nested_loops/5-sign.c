#include "main.h"
/**
 *print_sign - prints +, 0 or -
 *@n: is the argument input
 *Return: 1 if n is > 0, 0 is n is == 0, - if n is < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
