m,n = list(map(int, input().split()))
ls = [list(map(float, input().split())) for i in range(n)]

for i in zip(*ls):
    print(sum(i)/n)