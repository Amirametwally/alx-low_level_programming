#include "main.h"
/**
 * alloc_grid - creates 2D array of ints
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width * height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		abort();

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			int i;

			for (i = 0; i < height; i++)
			{
				free(a[i]);
			}
			free(a);
			abort();
		}
  }

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
