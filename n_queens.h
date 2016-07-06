#ifndef _N_QUEENS_H_DECL_
#define _N_QUEENS_H_DECL_

#include "grid.h"

// Returns arbitrary # of vectors of length n holding the positions of the queen in each row.
std::vector<std::vector<int>> generate_n_queens(unsigned n);

#endif