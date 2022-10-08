n = int(input("Enter value of n:"))

for i in range(n):
    if (i==n-1 or i==0):
        print("* "*n)
    else:
        print("* "+(" 5 "*(n-2))+"* ")
