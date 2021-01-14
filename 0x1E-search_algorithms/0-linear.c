#include "search_algos.h"

/**
 *linear_sear - to do a linear search algorithm
 *@array: array for the search
 *@size: size of array
 *@value: element to search
 *Return: num of index or -1
 */
int linear_search(int *array, size_t size, int value)
{
  size_t y = 0;

  if (array)
    {
      for (y = 0; y < size, y++)
	{
	  printf("Value checked array[%ld] = [%d]\n",
		 y, array[y]);
	  if (array[y] == value)
	    return (y);
	}
    }
  else
    return (-1);
}
