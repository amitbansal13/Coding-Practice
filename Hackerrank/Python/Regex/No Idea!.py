_ = input()

n = input().split()
a = set(input().split())
b = set(input().split())
h=0

for i in n:
    if i in a:
        h+=1
    elif i in b:
        h-=1
print(h)
