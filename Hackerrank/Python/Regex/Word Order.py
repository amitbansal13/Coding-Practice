# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

d = OrderedDict()

n = int(input())

for _ in range(n):
    s = input()
    if s in d:
        d[s]+=1
    else:
        d[s]=1

print(len(d))
print(' '.join(list(map(str,d.values()))))
