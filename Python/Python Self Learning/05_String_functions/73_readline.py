f = open('textfile.txt','r')

data = f.readline()
print(data)
data=f.readline() #extra space is generated due to escape sequnce in the text file
print(data)
f.close()