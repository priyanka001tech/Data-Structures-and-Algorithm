# You are given a sequence of number A 1 , A 2 ,…,A N . For each valid i,
# the star value of the element A i  is the number of valid indices j<i  such
# that Aj  is divisible by Ai . Calculate the maximum star value of a given
# sequence.


number=[]
ans=[]
maxi=0
n=int(input("Enter the no of elements: "))
for i in range(n):
    item=int(input())
    number.append(item)
    
for i in range(n):
    c=0
    for j in range(i):
        if(number[j]%number[i]==0):
            c+=1
            
    ans.append(c)
    
for i in range(len(ans)):
    maxi=max(maxi,ans[i])   
    
print("The star array is ", end=" ")
print(ans)    
print("The maximum star element is ",end="")
print(maxi)

# Enter the no of elements: 7

# 5 

# 4 

# 3

# 2

# 1

# 5

# 9
# The star array is  [0, 0, 0, 1, 4, 1, 0]
# The maximum star element is 4
