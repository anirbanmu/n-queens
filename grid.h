#ifndef _GRID_H_DECL_
#define _GRID_H_DECL_

#include <forward_list>
#include <vector>

// n x n grid
template<typename T = int> struct Grid
{
    Grid(unsigned dimension, T initial_value) : n(dimension), grid(n * n, initial_value)
    {
    }

    T& cell(unsigned row, unsigned column)
    {
        return grid[index(row, column)];
    }

    unsigned index(unsigned row, unsigned column) const
    {
        return row * n + column;
    }

    T cell(unsigned row, unsigned column) const
    {
        return grid[index(row, column)];
    }

    // friend std::ostream& operator<<(std::ostream&, const Grid&);

    unsigned n;
    std::vector<T> grid;
};


#endif