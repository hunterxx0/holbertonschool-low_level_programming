#!/usr/bin/python3
"""Island perimeter Function """


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    wid = 0
    leng = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1 and y != len(grid[x])-1 and grid[x][y+1] == 1:
                wid += 1
            elif grid[x][y] == 1 and y != 0 and grid[x][y-1] == 1:
                wid += 1
            if grid[x][y] == 1 and x != len(grid)-1 and grid[x+1][y] == 1:
                leng += 1
            elif grid[x][y] == 1 and x != 0 and grid[x-1][y] == 1:
                leng += 1
    return (wid * 2) + (leng * 2)
