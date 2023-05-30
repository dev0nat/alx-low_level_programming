#!/usr/bin/python3
"""function def that returns the perimeter of the island.
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    width = len(grid[0])
    length = len(grid)
    edges = 0
    perimeter = 0

    for n in range(length):
        for j in range(width):
            if grid[n][j] == 1:
                perimeter += 1
                if (j > 0 and grid[n][j - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
