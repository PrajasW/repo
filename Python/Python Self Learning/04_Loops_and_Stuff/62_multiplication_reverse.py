# ERROR


n = int(input("Enter value of n:"))
multiplicationTable = []

for i in range(1,11):
    multiplicationTable[i-1] = f"{n} x {i} = {n*i}"

for i in range(0,11):
    print(multiplicationTable[10-i])