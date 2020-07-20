A = set(input().split())
n = int(input())
ans = True
for i in range(n):
    s = set(input().split())
    ans = ans and len(s)<len(A) and s.intersection(A) == s
    
print(ans)