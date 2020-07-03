#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island
    """
    sum = 0
    if grid is None:
        return sum
    for i in range(len(grid)):
        """print(grid[i])"""
        for j in range(len(grid[0])):
            """print(grid[i][j])"""
            if grid[i][j] == 1:
                if grid[i][j+1] == 0:
                    sum += 1
                if grid[i][j-1] == 0:
                    sum += 1
                if grid[i+1][j] == 0:
                    sum += 1
                if grid[i-1][j] == 0:
                    sum += 1
                """
                print(grid[i][j])"""
    return sum
