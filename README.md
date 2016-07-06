# n-queens

Generates all solutions to the n-queen problem given a specific n.

Sample output generated for n = 8:

[ 0, 4, 7, 5, 2, 6, 1, 3 ]

    Q x x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x

[ 0, 5, 7, 2, 6, 3, 1, 4 ]

    Q x x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x Q x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x Q x x x x x x
    x x x x Q x x x

[ 0, 6, 3, 5, 7, 1, 4, 2 ]

    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x
    x x Q x x x x x

[ 0, 6, 4, 7, 1, 3, 5, 2 ]

    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    x x x x x Q x x
    x x Q x x x x x

[ 1, 3, 5, 7, 2, 0, 6, 4 ]

    x Q x x x x x x
    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x

[ 1, 4, 6, 0, 2, 7, 5, 3 ]

    x Q x x x x x x
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x

[ 1, 4, 6, 3, 0, 7, 5, 2 ]

    x Q x x x x x x
    x x x x Q x x x
    x x x x x x Q x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x

[ 1, 5, 0, 6, 3, 7, 2, 4 ]

    x Q x x x x x x
    x x x x x Q x x
    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x x x x x x x Q
    x x Q x x x x x
    x x x x Q x x x

[ 1, 5, 7, 2, 0, 3, 6, 4 ]

    x Q x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x Q x x x x x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x Q x
    x x x x Q x x x

[ 1, 6, 2, 5, 7, 4, 0, 3 ]

    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x x x Q x x x
    Q x x x x x x x
    x x x Q x x x x

[ 1, 6, 4, 7, 0, 3, 5, 2 ]

    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x Q x x x x
    x x x x x Q x x
    x x Q x x x x x

[ 1, 7, 5, 0, 2, 4, 6, 3 ]

    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x
    x x x x x x Q x
    x x x Q x x x x

[ 2, 0, 6, 4, 7, 1, 3, 5 ]

    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    x x x x x Q x x

[ 2, 4, 1, 7, 0, 6, 3, 5 ]

    x x Q x x x x x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x x x x x Q x x

[ 2, 4, 1, 7, 5, 3, 6, 0 ]

    x x Q x x x x x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x

[ 2, 4, 6, 0, 3, 1, 7, 5 ]

    x x Q x x x x x
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x

[ 2, 4, 7, 3, 0, 6, 1, 5 ]

    x x Q x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x

[ 2, 5, 1, 4, 7, 0, 6, 3 ]

    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x

[ 2, 5, 1, 6, 0, 3, 7, 4 ]

    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x x Q
    x x x x Q x x x

[ 2, 5, 1, 6, 4, 0, 7, 3 ]

    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x Q x x x x

[ 2, 5, 3, 0, 7, 4, 6, 1 ]

    x x Q x x x x x
    x x x x x Q x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x

[ 2, 5, 3, 1, 7, 4, 6, 0 ]

    x x Q x x x x x
    x x x x x Q x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x

[ 2, 5, 7, 0, 3, 6, 4, 1 ]

    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x Q x
    x x x x Q x x x
    x Q x x x x x x

[ 2, 5, 7, 0, 4, 6, 1, 3 ]

    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x

[ 2, 5, 7, 1, 3, 0, 6, 4 ]

    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x

[ 2, 6, 1, 7, 4, 0, 3, 5 ]

    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x Q x x

[ 2, 6, 1, 7, 5, 3, 0, 4 ]

    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x Q x x x

[ 2, 7, 3, 6, 0, 5, 1, 4 ]

    x x Q x x x x x
    x x x x x x x Q
    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x Q x x x

[ 3, 0, 4, 7, 1, 6, 2, 5 ]

    x x x Q x x x x
    Q x x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x

[ 3, 0, 4, 7, 5, 2, 6, 1 ]

    x x x Q x x x x
    Q x x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x

[ 3, 1, 4, 7, 5, 0, 2, 6 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x x x x x Q x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x Q x

[ 3, 1, 6, 2, 5, 7, 0, 4 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x Q x x x

[ 3, 1, 6, 2, 5, 7, 4, 0 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x x x Q x x x
    Q x x x x x x x

[ 3, 1, 6, 4, 0, 7, 5, 2 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x

[ 3, 1, 7, 4, 6, 0, 2, 5 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x

[ 3, 1, 7, 5, 0, 2, 4, 6 ]

    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x
    x x x x x x Q x

[ 3, 5, 0, 4, 1, 7, 2, 6 ]

    x x x Q x x x x
    x x x x x Q x x
    Q x x x x x x x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q
    x x Q x x x x x
    x x x x x x Q x

[ 3, 5, 7, 1, 6, 0, 2, 4 ]

    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x

[ 3, 5, 7, 2, 0, 6, 4, 1 ]

    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x Q x x x x x x

[ 3, 6, 0, 7, 4, 1, 5, 2 ]

    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x

[ 3, 6, 2, 7, 1, 4, 0, 5 ]

    x x x Q x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x
    Q x x x x x x x
    x x x x x Q x x

[ 3, 6, 4, 1, 5, 0, 2, 7 ]

    x x x Q x x x x
    x x x x x x Q x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x Q x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x x Q

[ 3, 6, 4, 2, 0, 5, 7, 1 ]

    x x x Q x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x

[ 3, 7, 0, 2, 5, 1, 6, 4 ]

    x x x Q x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x

[ 3, 7, 0, 4, 6, 1, 5, 2 ]

    x x x Q x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x

[ 3, 7, 4, 2, 0, 6, 1, 5 ]

    x x x Q x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x

[ 4, 0, 3, 5, 7, 1, 6, 2 ]

    x x x x Q x x x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x

[ 4, 0, 7, 3, 1, 6, 2, 5 ]

    x x x x Q x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x

[ 4, 0, 7, 5, 2, 6, 1, 3 ]

    x x x x Q x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x

[ 4, 1, 3, 5, 7, 2, 0, 6 ]

    x x x x Q x x x
    x Q x x x x x x
    x x x Q x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x

[ 4, 1, 3, 6, 2, 7, 5, 0 ]

    x x x x Q x x x
    x Q x x x x x x
    x x x Q x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x x x Q
    x x x x x Q x x
    Q x x x x x x x

[ 4, 1, 5, 0, 6, 3, 7, 2 ]

    x x x x Q x x x
    x Q x x x x x x
    x x x x x Q x x
    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x x x x x x x Q
    x x Q x x x x x

[ 4, 1, 7, 0, 3, 6, 2, 5 ]

    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x Q x
    x x Q x x x x x
    x x x x x Q x x

[ 4, 2, 0, 5, 7, 1, 3, 6 ]

    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    x x x x x x Q x

[ 4, 2, 0, 6, 1, 7, 5, 3 ]

    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x

[ 4, 2, 7, 3, 6, 0, 5, 1 ]

    x x x x Q x x x
    x x Q x x x x x
    x x x x x x x Q
    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x x x Q x x
    x Q x x x x x x

[ 4, 6, 0, 2, 7, 5, 3, 1 ]

    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x
    x Q x x x x x x

[ 4, 6, 0, 3, 1, 7, 5, 2 ]

    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x Q x x x x x

[ 4, 6, 1, 3, 7, 0, 2, 5 ]

    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x

[ 4, 6, 1, 5, 2, 0, 3, 7 ]

    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x x Q

[ 4, 6, 1, 5, 2, 0, 7, 3 ]

    x x x x Q x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x Q x x x x

[ 4, 6, 3, 0, 2, 7, 5, 1 ]

    x x x x Q x x x
    x x x x x x Q x
    x x x Q x x x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x Q x x x x x x

[ 4, 7, 3, 0, 2, 5, 1, 6 ]

    x x x x Q x x x
    x x x x x x x Q
    x x x Q x x x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x

[ 4, 7, 3, 0, 6, 1, 5, 2 ]

    x x x x Q x x x
    x x x x x x x Q
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x

[ 5, 0, 4, 1, 7, 2, 6, 3 ]

    x x x x x Q x x
    Q x x x x x x x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q
    x x Q x x x x x
    x x x x x x Q x
    x x x Q x x x x

[ 5, 1, 6, 0, 2, 4, 7, 3 ]

    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x x x Q x x x x

[ 5, 1, 6, 0, 3, 7, 4, 2 ]

    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x Q x x x x x

[ 5, 2, 0, 6, 4, 7, 1, 3 ]

    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x

[ 5, 2, 0, 7, 3, 1, 6, 4 ]

    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x

[ 5, 2, 0, 7, 4, 1, 3, 6 ]

    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x Q x x x x x x
    x x x Q x x x x
    x x x x x x Q x

[ 5, 2, 4, 6, 0, 3, 1, 7 ]

    x x x x x Q x x
    x x Q x x x x x
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q

[ 5, 2, 4, 7, 0, 3, 1, 6 ]

    x x x x x Q x x
    x x Q x x x x x
    x x x x Q x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x Q x

[ 5, 2, 6, 1, 3, 7, 0, 4 ]

    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x
    x x x x x x x Q
    Q x x x x x x x
    x x x x Q x x x

[ 5, 2, 6, 1, 7, 4, 0, 3 ]

    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x Q x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    Q x x x x x x x
    x x x Q x x x x

[ 5, 2, 6, 3, 0, 7, 1, 4 ]

    x x x x x Q x x
    x x Q x x x x x
    x x x x x x Q x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x

[ 5, 3, 0, 4, 7, 1, 6, 2 ]

    x x x x x Q x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x x x Q x
    x x Q x x x x x

[ 5, 3, 1, 7, 4, 6, 0, 2 ]

    x x x x x Q x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x

[ 5, 3, 6, 0, 2, 4, 1, 7 ]

    x x x x x Q x x
    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x
    x Q x x x x x x
    x x x x x x x Q

[ 5, 3, 6, 0, 7, 1, 4, 2 ]

    x x x x x Q x x
    x x x Q x x x x
    x x x x x x Q x
    Q x x x x x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x
    x x Q x x x x x

[ 5, 7, 1, 3, 0, 6, 4, 2 ]

    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x Q x x x x x

[ 6, 0, 2, 7, 5, 3, 1, 4 ]

    x x x x x x Q x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x x x Q
    x x x x x Q x x
    x x x Q x x x x
    x Q x x x x x x
    x x x x Q x x x

[ 6, 1, 3, 0, 7, 4, 2, 5 ]

    x x x x x x Q x
    x Q x x x x x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x x Q
    x x x x Q x x x
    x x Q x x x x x
    x x x x x Q x x

[ 6, 1, 5, 2, 0, 3, 7, 4 ]

    x x x x x x Q x
    x Q x x x x x x
    x x x x x Q x x
    x x Q x x x x x
    Q x x x x x x x
    x x x Q x x x x
    x x x x x x x Q
    x x x x Q x x x

[ 6, 2, 0, 5, 7, 4, 1, 3 ]

    x x x x x x Q x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x x x x Q x x x
    x Q x x x x x x
    x x x Q x x x x

[ 6, 2, 7, 1, 4, 0, 5, 3 ]

    x x x x x x Q x
    x x Q x x x x x
    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x
    Q x x x x x x x
    x x x x x Q x x
    x x x Q x x x x

[ 6, 3, 1, 4, 7, 0, 2, 5 ]

    x x x x x x Q x
    x x x Q x x x x
    x Q x x x x x x
    x x x x Q x x x
    x x x x x x x Q
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x

[ 6, 3, 1, 7, 5, 0, 2, 4 ]

    x x x x x x Q x
    x x x Q x x x x
    x Q x x x x x x
    x x x x x x x Q
    x x x x x Q x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x Q x x x

[ 6, 4, 2, 0, 5, 7, 1, 3 ]

    x x x x x x Q x
    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x Q x x
    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x

[ 7, 1, 3, 0, 6, 4, 2, 5 ]

    x x x x x x x Q
    x Q x x x x x x
    x x x Q x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x x Q x x x
    x x Q x x x x x
    x x x x x Q x x

[ 7, 1, 4, 2, 0, 6, 3, 5 ]

    x x x x x x x Q
    x Q x x x x x x
    x x x x Q x x x
    x x Q x x x x x
    Q x x x x x x x
    x x x x x x Q x
    x x x Q x x x x
    x x x x x Q x x

[ 7, 2, 0, 5, 1, 4, 6, 3 ]

    x x x x x x x Q
    x x Q x x x x x
    Q x x x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x Q x x x
    x x x x x x Q x
    x x x Q x x x x

[ 7, 3, 0, 2, 5, 1, 6, 4 ]

    x x x x x x x Q
    x x x Q x x x x
    Q x x x x x x x
    x x Q x x x x x
    x x x x x Q x x
    x Q x x x x x x
    x x x x x x Q x
    x x x x Q x x x