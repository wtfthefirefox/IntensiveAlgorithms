from eight_queens import eight_queens


def attacks(i, j, positions):
    for x, y in positions:
        if i == x and j == y:
            continue

        if i == x or j == y:
            return True

        if (x + y == i + j) or (x - y == i - j):
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
        assert not attacks(i, j, result), "Queens attack each other"
