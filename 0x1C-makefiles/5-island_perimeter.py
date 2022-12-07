#!/usr/bin/python3
"""A python script that calculates the perimeter of islands
"""


def island_perimeter(grid) -> int:
    """Calculate the perimeter of the `grid`

    Args:
        grid (list): list of list of integers representing water/land

    Returns:
        int: the perimeter of the island
    """
    peri = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i-1 < 0 or grid[i-1][j] == 0:
                    peri += 1
                if j-1 < 0 or grid[i][j-1] == 0:
                    peri += 1
                if i+1 >= len(grid) or grid[i+1][j] == 0:
                    peri += 1
                if j+1 >= len(grid[i]) or grid[i][j+1] == 0:
                    peri += 1

    return peri
