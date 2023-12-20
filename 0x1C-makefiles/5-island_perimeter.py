#!/usr/bin/python3
""" Module contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    i_perimeter = 0

    number_rows = len(grid)

    if grid != []:
        number_columns = len(grid[0])

    for i in range(number_rows):
        for j in range(number_columns):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    i_perimeter += 1
                if (i + 1) == number_rows or grid[i + 1][j] == 0:
                    i_perimeter += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    i_perimeter += 1
                if (j + 1) == number_columns or grid[i][j + 1] == 0:
                    i_perimeter += 1

    return i_perimeter
