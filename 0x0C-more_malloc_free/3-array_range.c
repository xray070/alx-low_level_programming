#include "main.h"
#include <stdlib.h>

/**
 * array_range - Print a range of numbers
 * @min: Minimum int
 * @max: Maximum int
 * Return: The array of int or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	/* Space is max - min + 1 to accomodate both the min and max */
	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);


	for (i = 0; min <= max; i++)
	{
		arr[i] = min++; /* Increment the min value and put in arr */
	}


	return (arr);
}
