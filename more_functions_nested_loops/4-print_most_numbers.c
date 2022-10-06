#include "main.h"
/**
 *print_most_numbers - prints all numbers except 2 and 4
 *
 *Return: nothing because void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i = i + 1)
	{
		if (i == '2' || i == '4')
	{
		continue;
	}
		_putchar(i);
	}
	_putchar('\n');
}
