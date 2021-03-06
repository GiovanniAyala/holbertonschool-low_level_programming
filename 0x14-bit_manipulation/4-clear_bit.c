#include "holberton.h"
/**
 * clear_bit - Clear bit
 * @n: Number
 * @index: Index
 * Return: 1 :) or -1 :(
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n != NULL && index < 64)
	{
		*n = (~(1 << index) & *n);
		return (1);
	}
	return (-1);
}
