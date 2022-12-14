#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: size of memory/bytes to allocate
 *@c: the char to fill these bytes
 *Return: pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(c));
	if (size <= 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		/*give each index of array the address of char c*/
		array[i] = c;
		i = i + 1;
	}
	return (array);
}
