#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    calculating the perimeter of an island(grid)

    Args:
    grid(list of integers): the grid representing the island

    Returns:
    int: perimeter of the island
    """

    rows = len(grid)
    columns = len(grid[0])
    total_land_cells = 0
    shared_edges = 0

    for x in range(rows):
        for y in range(columns):
            if grid[x][y] == 1:
                total_land_cells += 1

                if (x > 0 and grid[x - 1][y] == 1):
                    shared_edges += 1

                if (y > 0 and grid[x][y - 1] == 1):
                    shared_edges += 1

    p = (total_land_cells * 4) - (shared_edges * 2)
    return p
