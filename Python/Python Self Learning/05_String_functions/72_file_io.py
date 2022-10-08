f = open('textfile.txt','r')
# data = f.read() to read complete data [ can only use read once ]

data = f.read(7) #reads the first 7 characters of textfile

print(data)
f.close()