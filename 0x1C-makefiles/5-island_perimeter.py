#!/usr/bin/python3
"""Island perimeter Function """


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    wid = 0
    leng = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if ((x != len(grid)-1 and grid[x+1][y] == 1 and
                     y != len(grid[x])-1 and grid[x][y+1] == 1) or
                    (x != 0 and grid[x-1][y] == 1 and
                     y != len(grid[x])-1 and grid[x][y+1] == 1) or
                    (x != len(grid)-1 and grid[x+1][y] == 1 and
                     y != 0 and grid[x][y-1] == 1) or
                    (x != 0 and grid[x-1][y] == 1 and y != 0 and
                     grid[x][y-1] == 1)):
                    leng = 1
                    wid = 1
                    i, j, flag = x, y, 1
                    while grid[i][j] == 1:
                        if flag != 1:
                            wid += 1
                        if flag == 1:
                            if (j != 0 and j != len(grid[x])-1 and
                               grid[i][j+1] == 1 and grid[i][j-1] == 1):
                                j -= 1
                            elif j != 0 and grid[i][j-1] == 1:
                                flag = 2
                            elif j != len(grid[x])-1 and grid[i][j+1] == 1:
                                flag = 3
                        if flag == 3:
                            j += 1
                        if flag == 2:
                            j -= 1
                    j, flag = y, 1
                    while grid[i][j] == 1:
                        if flag != 1:
                            leng += 1
                        if flag == 1:
                            if (i != 0 and i != len(grid[i])-1 and
                               grid[i+1][j] == 1 and grid[i-1][j] == 1):
                                i -= 1
                            elif j != 0 and grid[i-1][j] == 1:
                                flag = 2
                            elif j != len(grid[i])-1 and grid[i+1][j] == 1:
                                flag = 3
                        if flag == 3:
                            i += 1
                        if flag == 2:
                            i -= 1
    return (wid * 2) + (leng * 2)
