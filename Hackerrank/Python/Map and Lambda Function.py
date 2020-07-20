cube = lambda x: x**3 # complete the lambda function 

def fibonacci(n):
    if n ==0:
        return []
    if n==1:
        return [0]
    if n==2:
        return [0,1]
    ls = [0,1]
    for i in range(n-2):
        ls.append(ls[-1]+ls[-2])
    return ls

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))