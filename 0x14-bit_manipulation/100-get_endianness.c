#include "main.h"

/**
 ** get_endianness - look at endianness ,
 ** and check it.
 ** Return: 0 if huge endian, 1 if small endian
 **/
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
