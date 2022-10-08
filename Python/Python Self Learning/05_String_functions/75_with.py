# context manager

with open('another.txt','w') as f:
    f.write("chicken ")
with open('another.txt','r') as f:
    text = f.read()
print(text)