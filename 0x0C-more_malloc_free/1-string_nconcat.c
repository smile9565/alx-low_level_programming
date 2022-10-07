#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string char
 * @s2: second string char
 * @n: size integer
 *
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = size(s1);
	size2 = size(s2);

	if (n >= size2)
		n = size2;

	str = malloc(sizeof(char) * (size1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
			str[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			str[i] = s2[j];
			i++;
		}
		str[size1 + n] = '\0';
		return (str);
	}
}

/**
 * size - Return the size of a string
 *
 * @str: string
 *
 * Return: integer size of string
 */
int size(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
