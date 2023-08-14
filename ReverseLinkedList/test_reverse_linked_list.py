from reverse_linked_list import Node
from reverse_linked_list import reverse_linked_list


def get_list(node: Node, result):
    result.append(node.value)

    if node.next is not None:
        get_list(node.next, result)


def test_reverse_linked_list():
    node4 = Node(3, None)
    node3 = Node(9, node4)
    node2 = Node(5, node3)
    node1 = Node(1, node2)

    reverse_linked_list(node1)

    result = []
    get_list(node4, result)

    assert result == [3, 9, 5, 1]
