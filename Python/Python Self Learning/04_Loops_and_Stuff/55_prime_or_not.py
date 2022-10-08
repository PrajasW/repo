num = int(input("Enter number to check:"))

for i in range(2,num):
    if(num%i == 0):
        print(str(num)+" is not Prime")
        break
else:
    print(str(num)+" is Prime")