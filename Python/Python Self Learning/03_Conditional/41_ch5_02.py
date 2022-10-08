marksPhysics = int(input("Enter the marks in Physics:"))
marksChemistry = int(input("Enter the marks in Chemistry:"))
marksMaths = int(input("Enter the marks in Maths:"))

avg = (marksChemistry + marksMaths + marksPhysics) /3

if(marksPhysics<33 or marksChemistry<33 or marksMaths<33):
    print("Padh le sale")
elif(avg<40):
    print("Bhai tu kya kate par pass hoga?")
else:
    print("congratulations party?")