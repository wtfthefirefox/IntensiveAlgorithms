from breadth_first_tree_traversal import breadth_first_tree_traversal


def test_breadth_first_tree_traversal():
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

    assert breadth_first_tree_traversal(1, tree) == [1, 2, 7, 3, 4, 9, 5]
    assert breadth_first_tree_traversal(4, tree) == [4, 5]
    assert breadth_first_tree_traversal(3, tree) == [3]
    assert breadth_first_tree_traversal(7, tree) == [7, 9]
