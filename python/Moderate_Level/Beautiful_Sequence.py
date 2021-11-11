# A permutation p 1 ,p 2 ...p N  of {1,2,...,N} is beautiful if p i &amp;p i+1  is greater than
# 0 for every 1≤i&lt;N . You are given an integer N, and your task is to
# construct a beautiful permutation of length N or determine that it&#39;s
# impossible.
# *a&amp;b denotes the  bitwise AND  of a and b.
# Beautiful permutation of 3 and 5. If N=4 it is not possible
# 1 3 2
# 2 3 1 5 4

from itertools import permutations

def solve(arr):
    for x, y in zip(arr[:-1], arr[1:]):
        if (x & y == 0):
            return False
    return True

def printPer(arr):
    for i in arr:
        if (solve(i)):
            print(i, sep=" ", end="\n")
  
num = list(map(int,input("Enter the sequence: ").split()))
printPer(permutations(num))

# Enter the sequence: 1 2 3 4 5
# (2, 3, 1, 5, 4)
# (4, 5, 1, 3, 2)
