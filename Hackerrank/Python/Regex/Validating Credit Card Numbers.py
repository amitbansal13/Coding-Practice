# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

r = r'^[456]\d{3}(-?)\d{4}\1\d{4}\1\d{4}$'
for _ in range(int(input())):
    s= input()
    # print(re.findall(r,s))
    if re.search(r,s):
        s = s.replace('-','')
        if re.search(r'(\d)\1{3,}',s) is None:
            print('Valid')
        else:
            print('Invalid')
    else:
        print('Invalid')
