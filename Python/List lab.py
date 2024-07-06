#append
myList=[1,2,4,5]
print(myList)
print("After appending")
myList.append(6)
myList.append(7)
print(myList)
#insert
print("After insert an elment")
myList.insert(2,3)
print(myList)
#Remove
print("Remove the list")
myList.remove(7)
print("After removing the list",myList)
print(myList[:2])
print("using2:")#give the before value of index
#reverse()
print("Reverse the list:")
print(myList[:-1])
myList.reverse()#modify the orginal list
print(myList)
#length-->len()
print("calculate the lenguth of the list")
print(len(myList))
#min()&max()
print(min(myList))
print(max(myList))
print(myList.count(4))
#concatnate
print("Adding another list:")
yourList=['Are numbers']
print(myList+yourList)
#multiply
print("After Multiplying")
print(myList*2)
#sort sort the element
myList.sort()
print(myList)
#copy
#syntx: list.copy()
even_num=[2,4,6]
value=even_num.copy()
print("Original List:",even_num)
print("copied list:",value)
#clear
myList.clear()
print(myList)
