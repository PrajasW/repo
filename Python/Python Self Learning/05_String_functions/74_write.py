# Opening a file

# f = open('textfile.txt','w')
# f.write("write this to the file") #it overwrittes / if file not present it creates new file
# f.close()

# Appending

f = open('textfile.txt','a')
f.write('\n This is Appending')
f.close()
