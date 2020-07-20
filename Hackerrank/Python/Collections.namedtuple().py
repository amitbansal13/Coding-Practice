from collections import namedtuple
n = int(input())
Student = namedtuple('Student', ','.join(input().split()))
ans = 0
for _ in range(n):
    ans += int(Student(*input().split()).MARKS)

print('%.2f'%(ans/n))
