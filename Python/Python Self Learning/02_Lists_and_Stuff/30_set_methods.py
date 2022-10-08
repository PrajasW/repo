b=set()
print(type(b))      

# Adding values to empty set

b.add(5)
b.add(4)
b.add("Prajas")
b.add(4)

# you can not add list or dictionary in set
# b.add([2,5,12])
# b.add({"l1":41})
# i.e. if something is mutable (hashable) then you can


# but you can add tuples
b.add((14,51,511))

print(b)

print(len(b)) #prints the length of the set
b.remove(5) #removes 5
# b.remove(15) throws an error as 15 is not presenet

print(b)

b.pop() # removes random element
print(b)

b.union()  #prints the union of set b with the parametes
b.intersection() #prints the intersection of set b with the parametes
