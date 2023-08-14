from itertools import permutations as itertools_permutations

from permutations import permutations


def test_permutations():
    for i in range(1, 5):
        perms1 = permutations(i)
        perms2 = list(itertools_permutations(range(1, i + 1)))

        for perms in perms2:
            assert list(perms) in perms1
