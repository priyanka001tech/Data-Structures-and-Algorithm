# 5. Print the following Pattern
# * * * * * *
# *         *
# *         *
# *         *
# *         *
# * * * * * *

n=int(input("Enter the row number: "))
m=int(input("Enter the col number: "))

for i in range(1, n+1) :
    for j in range(1, m+1) :
        if(i == 1 or i == n or j == 1 or j == m):
            print("* ", end="")           
        else:
            print("  ", end="")           
         
    print() 


OUTPUT:
Enter the row number: 8

Enter the col number: 7
* * * * * * * 
*           * 
*           * 
*           * 
*           * 
*           * 
*           * 
* * * * * * *  
