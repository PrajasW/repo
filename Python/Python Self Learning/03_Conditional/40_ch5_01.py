num1 = int(input("Enter Number 1:"))
num2 = int(input("Enter Number 2:"))
num3 = int(input("Enter Number 3:"))
num4 = int(input("Enter Number 4:"))

if(num1>num2):
    if(num1>num3):
        if(num1>num4):
            print("1 is the greatest")
if(num2>num1):
    if(num2>num3):
        if(num2>num4):
            print("2 is the greatest")
if(num3>num2):
    if(num3>num1):
        if(num3>num4):
            print("3 is the greatest")
if(num4>num2):
    if(num4>num3):
        if(num4>num1):
            print("4 is the greatest")