l1 = [1 , 8 , 7 , 2, 21 , 15]

print("Orignal List\n",l1)

# sorting list [WRONG METHOD]
l1_sorted = l1.sort()
# print(l1_sorted) [WRONG]

# to sort [CORRECT WAY]

l1.sort() #To sort the list in asseccinding order
l1.reverse() #To reverse the list
l1.insert(0,154) # to add x at index i list.insert(i,x)

# important
l1.append(69) #adds to the end of the list

l1.pop(2) #it will remove the element at index 2
l1.remove(21) #removes the element "21"

print(l1)

# go to python docs for more list methods 