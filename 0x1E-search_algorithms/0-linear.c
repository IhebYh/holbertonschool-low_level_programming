/**
* linear_search - searches for a value in an array using Linear search
* @array: int
* @size: size_t
* @value: int
* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (0);
	}
	return (1);
}
