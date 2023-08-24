#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """
    count lake of island
    """
    lake = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                ch = 0
                if i > 0 and not grid[i - 1][j]:
                    lake += 1
                    ch += 1
                if i + 1 < len(grid) and not grid[i + 1][j]:
                    lake += 1
                    ch += 1
                if j > 0 and not grid[i][j - 1]:
                    lake += 1
                    ch += 1
                if j + 1 < len(grid[i]) and not grid[i][j + 1]:
                    lake += 1
                    ch += 1
                if lake > 3 and ch >= 3:
                    return lake
    return lake
