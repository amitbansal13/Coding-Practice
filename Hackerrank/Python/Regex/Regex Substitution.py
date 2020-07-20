import re

def func(m):
    # print(m.groups())
    if m.groups()[0] == '&&':
        return 'and'
    else:
        return 'or'

for _ in range(int(input())):
    s = input()
    print(re.sub(r'(?<= )(&&|\|\|)(?= )', func, s))
