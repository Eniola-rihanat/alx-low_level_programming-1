#include "main.h"
/**
 * swap - a function that swaps the value of two integers
 * @i: integer pointer
 * @j: integer ponter
 * Return: Nothing
 */
void swap(int *i, int *j)
{
	int aux;

	aux = *i;
	*i = *j;
	*j = aux;
}