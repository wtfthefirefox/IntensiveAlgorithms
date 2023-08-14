from prime_numbers import prime_numbers


def test_prime(numbers):
    assert prime_numbers(2) == [2]
    assert prime_numbers(6) == [2, 3, 5]
    assert prime_numbers(13) == [2, 3, 5, 7, 11, 13]
    assert prime_numbers(30) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
