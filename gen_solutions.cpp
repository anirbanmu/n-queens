#include <iostream>

#include "n_queens.h"

using namespace std;

void print_as_grid(const vector<int>& positions)
{
    const unsigned n = positions.size();
    for (unsigned r = 0; r < n; ++r)
    {
        cout << "    ";
        for (unsigned c = 0; c < n; ++c)
        {
            cout << (c == positions[r] ? "Q" : "x") << " ";
        }
        cout << endl;
    }
}

void print_list(const vector<int>& positions)
{
    cout << "[ ";
    for (unsigned i = 0; i < positions.size(); ++i)
    {
        cout << positions[i] << (i + 1 == positions.size() ? "" : ", ");
    }
    cout << " ]" << endl;
}

int main(int, char**)
{
    const auto solutions = generate_n_queens(unsigned(8));
    for (const auto& positions : solutions)
    {
        print_list(positions);
        cout << endl;
        print_as_grid(positions);
        cout << endl;
    }
    return 0;
}