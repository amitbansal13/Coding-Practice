if __name__ == '__main__':
    s = input()
    for i in ['isalnum','isalpha','isdigit', 'islower', 'isupper']:
        print(any(eval('c.'+i+'()') for c in s))