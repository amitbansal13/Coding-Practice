# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

n = int(input())
ls = input().split()
k = int(input())

ans = combinations(ls,k)
count = 0
n = 0
for i in ans:
    if 'a' in i:
        count+=1
    n+=1
print(count/n)
