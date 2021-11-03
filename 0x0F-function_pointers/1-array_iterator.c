#include "function_pointers.c"
/**
 * array_iterator - executes a function on each element of the array
 * @array:int
 * @size:size_t
 * @action:void
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (action != NULL && array != NULL)
for (; i < size; i++)
{
action(array[i]);
}
}
