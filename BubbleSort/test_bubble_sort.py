from random import randint

from bubble_sort import bubble_sort


def test_bubble_sort():
    array = []
    for i in range(5):
        array = [randint(0, 100) for j in range(10)]

    assert bubble_sort(array) == sorted(array)
