#!/usr/bin/python3
def island_perimeter(grid):
    if not grid or not grid[0]:
        return 0
    r, c = len(grid), len(grid[0])
    peri = 0

    for i in range(r):
        for j in range(c):
            if grid[i][j] ==1:
                peri += 4
                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 2
    return peri
