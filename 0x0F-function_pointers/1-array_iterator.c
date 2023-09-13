#include <stdio.h>
#include "function_pointers.h"

/**
 ** array_iterator - prints an integer
 ** @array: the array of element
 ** @size : the size of the array
 ** @action :the pointer to the function that is used
 ** Return: Nothing.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
{
	action(*array);
	array++;
}
}
