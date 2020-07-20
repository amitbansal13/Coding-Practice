for _ in range(int(input())):
    input()
    s1 = set(input().split())
    input()
    s2 = set(input().split())

    if s1.intersection(s2) == s1:
        print(True)
    else:
        print(False)
