from binary_search import binary_search


def test_binary_search():
    arr1 = [1, 2, 3, 4, 5, 6, 7]

    for i, value in enumerate(arr1):
        assert binary_search(value, arr1) == i - 1
