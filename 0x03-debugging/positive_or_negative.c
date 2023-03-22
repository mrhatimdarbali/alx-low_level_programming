#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - checks whether a number is positive or negative
 * @i: the number to be checked
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	/* This function checks whether a number is positive or negative */
	if (i >= 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
