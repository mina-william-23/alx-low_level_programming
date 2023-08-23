#!/usr/bin/python3
''' island_perimeter module '''


def island_perimeter(grid):
    ''' compute perimiter of 1 spots in grid '''
    peri = 0

    if isinstance(grid, list) and all(isinstance(item, list) for item in grid):
        width = len(grid)
        length = len(grid[0])
        for w in range(width):
            for ln in range(length - 1):
                if grid[w][ln] != grid[w][ln + 1]:
                    peri += 1
                if w != width - 1 and grid[w][ln] != grid[w + 1][ln]:
                    peri += 1
    return peri


