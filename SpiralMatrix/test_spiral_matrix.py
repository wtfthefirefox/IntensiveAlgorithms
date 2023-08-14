from spiral_matrix import spiral_matrix


def test_spiral_matrix():
    assert spiral_matrix(1) == [[1]]
    assert spiral_matrix(2) == [[1, 2], [4, 3]]
    assert spiral_matrix(3) == [[1, 2, 3], [8, 9, 4], [7, 6, 5]]
