# 1
str=input()
str1=str[1:len(str)-1]
print( str1)

# INPUT: abcd
# OUTPUT: bd

# 2
a=input()
b=input()
st=a[0]+b[0]+a[len(a)//2]+b[len(b)//2]+a[-1]+b[-1]
print(st)

# INPUT: abcdp
#        efghq
# OUTPUT: aecgpq

# 3
c=input()
d=input()
st3=c[:len(c)//2]+d+c[len(c)//2:]
print(st3)

# INPUT: abcd
#        efgh
# OUTPUT: abefghcd

# 4
e=input()
st4=e.lower()
print(st4.count("india"))

# INPUT: Welcome to India
# OUTPUT: 1

# 5
f=input()
x=f.rfind("Emma")
print(x)

# INPUT: Emma is good Emma is nice
# OUTPUT: 13

# 6
g=input()
st6=g[:len(g)//2] + " " + g[len(g)//2:]
print(st6)

# INPUT: abcd
# OUTPUT: ab cd

#7
sampleList = [34, 54, 67, 89, 11, 43, 94]
print("Original list", sampleList)
element = sampleList.pop(4)
print("List After removing element at index 4", sampleList)
sampleList.insert(2, element)
print("List after Adding element at index 2", sampleList)
sampleList.append(element)
print("List after Adding element at last", sampleList)

# OUTPUT: 
# Original list [34, 54, 67, 89, 11, 43, 94]
# List After removing element at index 4 [34, 54, 67, 89, 43, 94]
# List after Adding element at index 2 [34, 54, 11, 67, 89, 43, 94]
# List after Adding element at last [34, 54, 11, 67, 89, 43, 94, 11]

#8
a = (10, 20, 30, 40, 50)
a = a[::-1]
print(a)

# OUTPUT:
# 50 40 30 20 10

#9
aTuple = ("Orange", [10, 20, 30], (5, 15,25))
print(aTuple[1][1])

# OUTPUT: 20

#10
aTuple = (10, 20, 30, 40)
a, b, c, d = aTuple
print(a)
print(b)
print(c)
print(d)

# OUTPUT:
# 10
# 20
# 30
# 40

#11
tuple1 = (11, 22)
tuple2 = (99, 88)
tuple1, tuple2 = tuple2, tuple1
print(tuple1)
print(tuple2)

# OUTPUT:
# 99 88
# 11 22

#12
tuple1 = (11, 22, 33, 44, 55, 66)
tuple2 = tuple1[3:5]
print(tuple2)

# OUTPUT:
# 44 55

#13
tuple1 = (11, [22, 33], 44, 55)
tuple1[1][0] = 222
print(tuple1)

# OUTPUT:
# (11, [222, 33], 44, 55)

#14
keys = ["Ten", "Twenty", "Thirty"]
values = [10, 20, 30]
sampleDict = {
    keys[0] : values[0],
    keys[1] : values[1],
    keys[2] : values[2]
}
print(sampleDict)

# OUTPUT:
# {'Twenty': 20, 'Ten': 10, 'Thirty': 30}


#15
dict1 = {"Ten": 10, "Twenty": 20, "Thirty": 30}
dict2 = {"Thirty": 30, "Fourty": 40, "Fifty": 50}
dict2.update(dict1)
print(dict2)

# OUTPUT:
# {'Ten': 10, 'Twenty': 20, 'Fifty': 50, 'Fourty': 40, 'Thirty': 30}

#16
sampleDict = {"a": 100, "b": 200, "c": 300}
print(200 in sampleDict.values())

# OUTPUT: True

#17
sampleDict = {
"name": "Kelly",
"age":25,
"salary": 8000,
"city": "New yor"
}
sampleDict['location'] = sampleDict.pop('city')
print(sampleDict)

# OUTPUT:
# {'name': 'Kelly', 'age': 25, 'salary': 8000, 'location': 'New yor'}

#18
sampleDict = {
"Physics": 82,
"Math": 65,
"history": 75
}
print(min(sampleDict, key=sampleDict.get))

# OUTPUT:
# Math

#19
sampleDict = { 
    "emp1": {"name": "Jhon", "salary": 7500}, "emp2": {"name": "Emma",
"salary": 8000}, "emp3": {"name": "Brad", "salary": 6500}}

sampleDict['emp3']['salary'] = 8500
print(sampleDict)

# OUTPUT:
# {'emp1': {'name': 'Jhon', 'salary': 7500}, 'emp2': {'name': 'Emma', 'salary': 8000}, 'emp3': {'name': 'Brad', 'salary': 8500}}
