#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 *
 * @grid: The 2-dimensional array to be freed.
 * @height: The number of rows in the array.
 *
 * Description:
 * This function deallocates the memory allocated by alloc_grid for a 2D array.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}

