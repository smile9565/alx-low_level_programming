#include "main.h"
#include <stdlib.h>
/**
 * *array_range - array of integers
 *
 * @min: integer minimo
 * @max: integer maximo
 *
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		size = size + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			ptr[i] = min;
			min++;
		}

		return (ptr);
	}
}
