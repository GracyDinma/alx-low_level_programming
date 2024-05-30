#!/usr/bin/python3


def island_perimeter(grid):
    """
    calculate the perimeter of the island described in the grid.
    Args:
    grid (list of integers) A retangular grid representing the islands
    Returns:the perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j[] == 1;
                    perimeter += 4
                    if i > 0 and grid[i - 1]{j] == 1:
                        perimeter -= 2
                    if j > 0 and grid[i][j - 1] == 1:
                        perimeter -=2 
                    
    return perimeter
