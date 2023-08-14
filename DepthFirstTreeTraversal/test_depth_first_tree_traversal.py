from depth_first_tree_traversal import depth_first_tree_traversal


def test_depth_first_tree_traversal():
    tree = {
        1: [2, 7],
        2: [3, 4],
        3: [None, None],
        4: [5, None],
        5: [None, None],
        6: [None, None],
        7: [None, 9],
        8: [None, None],
        9: [None, None],
    }

    result = [3, 5, 4, 2, 9, 7, 1]

    assert depth_first_tree_traversal(tree) == result
