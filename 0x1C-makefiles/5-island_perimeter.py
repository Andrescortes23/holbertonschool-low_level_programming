#!/usr/bin/python3
"""Module to calculate perimeter of the island described in grid"""


def island_perimeter(grid):
    """Calculate perimeter"""
    pm = 2
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                pm += 2
    return pm
