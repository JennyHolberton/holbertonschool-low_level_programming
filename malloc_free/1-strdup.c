#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_length - returns length of string pointed to by s
 *@s: pointer to char
 *Return: length
 */

int string_length(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}
/**
 *_strdup - returns pointer to allocated space in mem containing string
 *@str: contaings a string that will be duplicated
 *Return: retursn pointer to new string (duplicate of str), NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	/*allocate string_copy memory space of str length * size of char*/
	str_cpy = (char *) malloc((string_length(str) + 1) * sizeof(*str_cpy));
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		str_cpy[i] = str[i];
		i = i + 1;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
