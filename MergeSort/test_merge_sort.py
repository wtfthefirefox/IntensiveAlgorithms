from random import randint

from merge_sort import merge_sort


def test_merge_sort():
    array = []
    for i in range(5):
        array = [randint(0, 100) for j in range(10)]

    assert merge_sort(array) == sorted(array)
