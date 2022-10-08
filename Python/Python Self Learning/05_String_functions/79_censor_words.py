censorWords = ["gandu","chutiya","gand","nigger","fuck","fucker","gensin impact","baap","sala"]

with open('comment.txt') as file:
    str = file.read()

for i in range(0,len(censorWords)):
    if censorWords[i] in str:
        str = str.replace(censorWords[i],"*"*len(censorWords[i]))
with open('comment.txt','w') as file:
    file.write(str)
