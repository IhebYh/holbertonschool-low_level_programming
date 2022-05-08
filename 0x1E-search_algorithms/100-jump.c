#include "search_algos.h"
#include <math.h>
/**
* jump_search - search for a value in a sorted array using jump algo
* @array: array
* @size: size of the array
* @value: value to search for
* Return: int
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t i = 0;
	size_t s = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);

	while (array[i] < value && i < size)
	{
		s = i;
		i = s + jump;
		if (s < size)
			printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	}
	if (s >= size && array[size] != value)
		s -= jump;

	printf("Value found between indexes [%ld] and [%ld]\n", s, s + jump);

	while (array[s] < value)
	{
		if (s >= size)
			break;
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		s += 1;
	}

	if (array[s] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		return (s);
	}
	return (-1);
}
