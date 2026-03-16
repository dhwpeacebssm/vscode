class Tnode:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right
if __name__ == '__main__':
    n4 = Tnode(40, None, None)
    n5 = Tnode(30, None, None)
    n3 = Tnode(15, n5, None)
    n2 = Tnode(20, n4, None)
    n1 = Tnode(10, n2, n3)
    print("추가 강화 수치를 입력해 주세요.\n")
    plus = int(input())
    print(n1.data)
    print(n2.data)
    print(n4.data+plus)
    all = n1.data + n2.data+ n4.data+plus
    print("태양의 검 최종 루트 공격력 합계: {int}", all)


        