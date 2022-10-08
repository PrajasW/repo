def max(num1,num2,num3):
    if(num1>num2):
        if(num1>num3):
            return num1
        else:
            return num3
    else:
        return num2 

maxvalue = max ( 1 , 5, 2 )

print(maxvalue)