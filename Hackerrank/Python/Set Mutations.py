input()
s1 = set(input().split())
for _ in range(int(input())):
    a,b = input().split()
    s2 = set(input().split())
    eval('s1.{}(s2)'.format(a))

print(sum(map(int,s1)))