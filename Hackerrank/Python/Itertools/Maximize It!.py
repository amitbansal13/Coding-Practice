k,m = list(map(int,input().split()))
ls = [list(map(int,input().split()))[1:] for _ in range(k)]
ans = 0
def func(v, i):
    if i>=k:
        return v
    ans = 0
    for j in range(len(ls[i])):
        v += ls[i][j]**2 
        ans = max(func(v, i+1)%m,ans%m)
        v -= ls[i][j]**2
    return ans%m

print(func(0, 0))
