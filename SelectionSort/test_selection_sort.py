from random import randint

from selection_sort import selection_sort


def test_bubble_sort():
    array = []
    for i in range(5):
        array = [randint(0, 100) for j in range(10)]

    assert selection_sort(array) == sorted(array)
