#!/usr/bin/python3
''' island_perimeter module '''


def island_perimeter(grid):
    ''' compute perimiter of 1 spots in grid '''
    peri = 0

    length = len(grid)
    width = len(grid[0])
    if width == 0:
        return peri
    for ln in range(length):
        for w in range(width - 1):
            if grid[ln][w] != grid[ln][w + 1]:
                peri += 1
            if ln != length - 1 and grid[ln][w] != grid[ln + 1][w]:
                peri += 1
    return peri
