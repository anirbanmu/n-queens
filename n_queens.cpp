#include <assert.h>
#include <iostream>

#include "n_queens.h"

using namespace std;

vector<unsigned> available_row_positions(unsigned row, const Grid<bool>& grid)
{
    vector<unsigned> v;
    for (unsigned i = 0; i < grid.n; ++i)
    {
        if (grid.cell(row, i) == false)
        {
            v.emplace_back(i);
        }
    }
    return v;
}

void mark_unavailable_positions(unsigned row, unsigned col, Grid<bool>& grid)
{
    for (unsigned r = row + 1; r < grid.n; ++r)
    {
        const unsigned diagonal_diff = r - row;
        grid.grid[grid.index(r, col)] = true;
        if (col + diagonal_diff < grid.n)
        {
            grid.grid[grid.index(r, col + diagonal_diff)] = true;
        }
        if (col >= diagonal_diff)
        {
            grid.grid[grid.index(r, col - diagonal_diff)] = true;
        }
    }
}

void generate_valid_n_queens(vector<vector<int>>& valid_positions, vector<int>& queen_row_pos, const Grid<bool>& grid, unsigned row)
{
    if (row == queen_row_pos.size())
    {
        // Successfully placed all n queens
        valid_positions.emplace_back(queen_row_pos);
        return;
    }

    assert(queen_row_pos[row] == -1); // No queens in this row.

    const auto avail_positions = available_row_positions(row, grid);
    for (auto p : avail_positions)
    {
        queen_row_pos[row] = p;
        Grid<bool> g = grid;
        mark_unavailable_positions(row, p, g);
        generate_valid_n_queens(valid_positions, queen_row_pos, g, row + 1);
    }

    // Mark as empty row before returning
    queen_row_pos[row] = -1;
}

vector<vector<int>> generate_n_queens(unsigned n)
{
    vector<vector<int>> valid_positions;

    {
        auto queen_row_position = vector<int>(n, -1);
        auto grid = Grid<bool>(n, false);

        generate_valid_n_queens(valid_positions, queen_row_position, grid, 0);
    }

    return valid_positions;
}