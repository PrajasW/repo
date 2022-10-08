
for i in range(2,21):
    for j in range(1,11):
        with open(f"Tables/Multiplication_Table_Of_{i}.txt",'w') as f:
            f.write("")
    for j in range(1,11):
        with open(f"Tables/Multiplication_Table_Of_{i}.txt",'a') as f:
            f.write(f"{i} x {j} = {i*j}\n ")