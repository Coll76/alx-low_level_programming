#!/usr/bin/python3

"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): Represents the
    grid where 1 represents land and 0 represents water.
    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid cells are connected horizontally/vertically
    (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water, and
    there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
