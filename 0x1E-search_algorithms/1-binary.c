#include "search_algos.h"
/**
 *binary_search - search of value with binary search
 *@array: array to search
 *@size: size of array
 *@value: element to search
 *Return: num of index or -1
 */

int binary_search(int *array, size_t size, int value)
{
  int left = 0, right = (size - 1), ind;
  
  if (array)
    {
      while (left <= right)
	{
	  printf("Searching in array: ");
	  for (ind = left; ind < right; ind++)
	    printf("%d, ", array[ind]);
	  ind = left + (right - left) / 2;
	  if (array[ind] == value)
	    return (ind);
	  if (array[ind] < value)
	    left = ind + 1;
	  else
	    right = ind - 1;
	}
    }
  return (-1);
}
