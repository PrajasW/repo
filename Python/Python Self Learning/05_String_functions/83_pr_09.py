# copy a file

file1 = 'this.txt'
file2 = 'copy.txt'


with open(file1) as f:
    str1= f.read()

with open(file2) as f:
    str2= f.read()

if( str1 == str2 ):
    print("yes identical")
else:
    print("not identical")