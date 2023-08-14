from eight_queens import eight_queens


def attack(i, j, board):
    for k in range(8):
        if board[i][k] == 1 or board[k][j] == 1:
            return True
    for k in range(8):
        for l in range(8):
            if (k + l == i + j) or (k - l == i - j):
                if board[k][l] == 1:
                    return True
    return False


def test_eight_queens():
    result = eight_queens()

    assert len(result) == 8
    for i in result:
        assert len(i) == 8

    queens = [(i, j) for j in range(8) for i in range(8) if result[i][j] == 1]

    assert len(queens) == 8

    for i, j in queens:
        assert not attack(i, j, result), "Queens attack each other"
