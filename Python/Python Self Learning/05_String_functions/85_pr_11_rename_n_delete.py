import os


oldname = 'this.txt'
newname= 'newfilethis.txt'

with open(oldname) as f:
    str1= f.read()

with open(newname,'w') as f:
    f.write(str1)

# how to delete a file
os.remove(oldname)


