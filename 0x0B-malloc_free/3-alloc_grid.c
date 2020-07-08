#include <stdlib.h>
/**
 *alloc_grid - pointer to a bidimensional array
 *@width: width of grid
 *@height: height of grid
 *Return: Null or grid
 */
int **alloc_grid(int width, int height)
{
	int **moby;
	int lex, luth;

	if (width <= 0 || height <= 0)
		return (NULL);
	moby = malloc(sizeof(int*) * height);
	if (moby == NULL)
		return (NULL);
	for (lex = 0; lex < height; lex++)
	{
		moby[lex] = malloc(sizeof(int) * width);
		if (moby[lex] == NULL)
		{
			for(luth = 0; moby[luth]; luth++)
				free(moby[luth]);
			return (NULL);
		}
	}
	return (moby);
}
