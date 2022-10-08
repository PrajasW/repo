UserName = input("Enter Your Username:")

UserNameLength = len(UserName)

if(UserNameLength<10):
    print("valid")
else:
    print("invalid")