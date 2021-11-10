# Print the following pattern
# 1
# 2 1
# 4 2 1
# 8 4 2 1
# 16 8 4 2 1
# 32 16 8 4 2 1
# 64 32 16 8 4 2 1

n=int(input("Enter the row number: "))

for i in range(0,n):
    for j in range(i,-1,-1):
        print(2**j,end="\t")
    
    print()


OUTPUT:
Enter the row number: 6
1	
2	1	
4	2	1	
8	4	2	1	
16	8	4	2	1	
32	16	8	4	2	1
