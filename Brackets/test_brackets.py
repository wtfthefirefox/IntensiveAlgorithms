from brackets import are_brackets_correct


def test_brackets():
    assert are_brackets_correct("()")
    assert are_brackets_correct("()(())")
    assert are_brackets_correct("(((())))()(())")
    assert are_brackets_correct("((()(())))")

    assert not are_brackets_correct(")")
    assert not are_brackets_correct("(())))")
    assert not are_brackets_correct("(")
