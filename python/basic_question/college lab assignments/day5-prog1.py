def symmetrical(n):
    if len(n)%2==0:
            print('The entered text is Symmetrical')
    else:
            print('The entered text is not Symmetrical')

def palindrome(n):
    if n[::-1] == n:
        print('The entered text is Palindrome')
    else:
        print('The entered text is not Palindrome')

num=input('Enter a number:      ')
symmetrical(num)
palindrome(num)
