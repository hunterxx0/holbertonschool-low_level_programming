#!/usr/bin/python3
"""Island perimeter Function """


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    if not grid:
        return 0
    count = res = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                i, j = x, y
                for i, j in ((i+1, j), (i-1, j), (i, j+1), (i, j-1)):
                    if (i < 0 or i == len(grid) or j < 0 or
                        j == len(grid[i]) or grid[i][j] == 0):
                        count += 1
    return count
