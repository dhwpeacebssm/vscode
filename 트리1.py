class Tnode:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right
if __name__ == '__main__':
    n2 = Tnode(20, None, None)
    n3 = Tnode(30, None, None)
    n1 = Tnode(10, 20, 30)
    print(n1.data)
    print(n1.left.data)
    print(n2.right.data)
    print(n2.data)
    print(n3.data)
    print(n3.left.data)
