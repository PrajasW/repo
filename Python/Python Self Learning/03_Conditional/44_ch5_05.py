UserNames = ["Prajas","Kanna","Kobayashi","Lucoa","Tohru"]

name = input("Enter the name to check: ")

# to check if name is present in UserNames
if ( name in UserNames ):
    print("Valid")
else:   
    print("Invalid")