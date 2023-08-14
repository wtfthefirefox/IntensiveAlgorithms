from maximum_subarray import maximum_subarray


def test_maximum_subarray():
    array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    assert maximum_subarray(array) == 6

    array = [1]
    assert maximum_subarray(array) == 1

    array = [5, 4, -1, 7, 8]
    assert maximum_subarray(array) == 23

    array = [-2, -1]
    assert maximum_subarray(array) == -1

    array = [-2, 1]
    assert maximum_subarray(array) == 1
