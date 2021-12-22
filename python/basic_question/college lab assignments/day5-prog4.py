def check(s):
    st=False
    num=False

    for i in s:
        if i.isalpha():
            st=True
        if i.isdigit():
            num=True
    return st and num

print(check(input('Enter a string:  ')))
