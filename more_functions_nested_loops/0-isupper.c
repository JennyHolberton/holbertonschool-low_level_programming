#include "main.h"
/**
 *_isupper - checks if there are uppercase letters
 *@c: is the input argument to be run through the function
 *Return: is 1 is argument is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		else
		{
		return (0);
		}
}
