#!/usr/bin/python3
"""Defination of an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimiter of the island defined in grid.

    The grid representation, water by 0 and land by 1.

    grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    sides = 0
    size = 0

    for j in range(height):
        for k in range(width):
            if grid[j][k] == 1:
                size += 1
                if (k > 0 and grid[j][k - 1] == 1):
                    sides += 1
                if (j > 0 and grid[j - 1][k] == 1):
                    sides += 1
    return size * 4 - sides * 2
