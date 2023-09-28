#include "main.h"

/**
 ** set_bit - put the value of a bit to 1. at a given index..
 ** @n: The pointer show  an unsigned long int.
 ** @index: index of the bit.
 **
 ** Return: 1 if it worked, 0 if it didn't.
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	return (0);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
