#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid.

    Args:
        grid: A list of lists of integers representing the grid.
            0 represents water, 1 represents land.

    Returns:
        The perimeter of the island as an integer.
    """

    rows, cols = len(grid), len(grid[0])
    edges = 0
    size = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    perimeter = size * 4 - edges * 2
    return perimeter