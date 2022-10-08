a = 15

# if a satisfies more than one conditional statements
# i.e. 45>17>13... the if/elif statement which is up in the conditional ladder will execute

# if-elif-else ladder

if(a>17):
    print("a is greater than 17")
elif(a>13):
    print("a is greater than 13")
elif(a>10):
    print("a is greater than 10")
elif(a>7):
    print("a is greater than 7")
else:
    print("a is less than 7")

# indentation is of 4 spaces "    " or one tab "    "

# [2] Multiple if statments : will check condition for all and execute accordingly
a=45 

if(a>17):
    print("a is greater than 17")
if(a>13):
    print("a is greater than 13")
if(a>10):
    print("a is greater than 10")
if(a>7):
    print("a is greater than 7")
else:
    print("a is less than 7")

# elif is usefull to jump out of the ladder if a condition is satisfied
