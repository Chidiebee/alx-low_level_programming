#include "search_algos.h"
/**
 * linear_search - Linearly search an array for a value
 * @array: The array to search through
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: the index of the element if found -1 else 
 */


int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
          return (-1);
    for (; i < size; i++)
    {
	  printf("Value checked array[%lu] = [%d]\n", i, array[i]);
          if (array[i] == value)
                return (i);
    }
    return (-1);
}

