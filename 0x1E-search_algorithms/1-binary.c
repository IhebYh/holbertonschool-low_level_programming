#include "search_algos.h"
/**
* binary_search - searches for a value in a sortedarray using BS algo
* @array: int
* @size: size_t
* @value: int
* Return: int
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, m, left;
	int *tmp;


	if (!array || array == NULL)
		return (-1);

	tmp = array;
	size -= 1;
	m = size / 2;
	left = 0;
	for (i = 0; left <= size; i++)
	{
		_print(tmp, size + 1, left);
		if (value == array[m])
			return (m);
		else if (value < array[m])
		{
			size = m - 1;
			m = (size + left) / 2;
		}
		else
		{
			left = m + 1;
			m = (size + left) / 2;
		}
	}

	return (-1);
}

/**
* _print - print an array
* @array: array
* @size: size of array
* @index: index to start the display
* Return: void
*/
void _print(int *array, size_t size, size_t index)
{
	printf("Searching in array: ");
	for(; index < size; index++)
	{
		printf("%d", array[index]);
		if (index < size - 1)
			printf(", ");
	}
	printf("\n");
}
