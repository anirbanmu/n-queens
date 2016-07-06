CXX := clang++-3.8
CXXFLAGS := -O2 -Wall -Werror -std=c++14 -pthread

# Link
n-queens: *.o
    $(CXX) $(CXXFLAGS) $(input) -o $(output)

gen_solutions.o: gen_solutions.cpp
    $(CXX) $(CXXFLAGS) -c $(input) -o $(output)

n_queens.o: n_queens.cpp
    $(CXX) $(CXXFLAGS) -c $(input) -o $(output)