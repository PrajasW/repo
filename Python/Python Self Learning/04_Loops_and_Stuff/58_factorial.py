n = int(input("Enter value of n:"))
fact=1
for i in range(1,n+1):
    fact=fact*i


# print("Factorial of "+ str(n) +" is "+ str(fact)) insted of this use this...
# fstream
print(f"The Factorial of {n} is {fact}")