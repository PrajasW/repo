m1 = int(input("Enter Marks Of Student 1:"))
m2 = int(input("Enter Marks Of Student 2:"))
m3 = int(input("Enter Marks Of Student 3:"))
m4 = int(input("Enter Marks Of Student 4:"))
m5 = int(input("Enter Marks Of Student 5:"))
m6 = int(input("Enter Marks Of Student 6:"))

#here int(...) is used to typecast the data type of the user input to integer datatupe

myMarksList = [m1,m2,m3,m4,m5,m6]
myMarksList.sort()
print(myMarksList)